#include<bits/stdc++.h>
using namespace std;
int minEle(int arr[], int idx, int n){
    if(idx==n-1) return arr[idx];
    return min(arr[idx],minEle(arr,idx+1,n));
}
int main(){
    int arr[]={6,2,4,-8,0,9};
    int n=sizeof(arr)/4;
    cout<<"Min element is : "<<minEle(arr,0,n);
    return 0;
}