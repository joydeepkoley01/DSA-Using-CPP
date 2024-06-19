#include<iostream>
using namespace std;
float powerFunc(int a, int b){
    if (b==0) return 1;
    else if (b==1) return a;
    else if(b>0){
        if(b%2==0) return (powerFunc(a,b/2)*powerFunc(a,b/2));
        else return (powerFunc(a,b/2)*powerFunc(a,b/2)*a);
    }
    else if(b<0){
        int p=-b;
        if (p%2==0) return 1/(powerFunc(a,p/2)*powerFunc(a,p/2));
        else return 1/(powerFunc(a,p/2)*powerFunc(a,p/2)*a);
    }
}
int main(){
    int b;
    cout<<"Enter base : ";
    cin>>b;
    int p;
    cout<<"Enter power : ";
    cin>>p;
    if(b==0 && p==0) cout<<b<<"^"<<p<<" is : Undefined";
    else cout<<b<<"^"<<p<<" is : "<<powerFunc(b,p);
    return 0;
}