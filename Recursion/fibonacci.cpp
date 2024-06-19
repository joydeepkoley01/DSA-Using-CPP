#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1) return 0;
    else if(n==2) return 1;
    int fibo1=fibonacci(n-1);
    int fibo2=fibonacci(n-2);
    return fibo1+fibo2;
}
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"The "<<x<<"th fibonacci number will be : "<<fibonacci(x);
    return 0;
}