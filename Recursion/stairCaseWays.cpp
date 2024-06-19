#include<iostream>
using namespace std;
// one can take 1, 2 or 3 steps at a time
int StairCase(int n){
    if(n<0) return 0;
    else if(n==0) return 1;
    return StairCase(n-1) + StairCase(n-2) + StairCase(n-3);
}
int main(){
    int x;
    cout<<"Enter number of stair-cases : ";
    cin>>x;
    cout<<"The no of ways of ridng "<<x<<" stairs : "<<StairCase(x);
    return 0;
}