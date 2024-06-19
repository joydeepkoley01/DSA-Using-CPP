#include<bits/stdc++.h>
using namespace std;
int gcdOfTwo(int a, int b){
    if(b==0) return a;
    return(b,a%b);
}
int main(){
    int m=18,n=24;
    if(m<n) swap(m,n);
    cout<<gcdOfTwo(m,n);
    return 0;
}