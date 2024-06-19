#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}
int main(){
    int n=7;
    cout<<"Sum of "<<n<<" natural numbers will be :"<<sum(n);
    return 0;
}