#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0){
        cout<<"Happy B'Day\n";
        return ;
    }
    cout<<n<<" days Left for B'Day\n";
    fun(n-1);
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    fun(n);
    return 0;
}