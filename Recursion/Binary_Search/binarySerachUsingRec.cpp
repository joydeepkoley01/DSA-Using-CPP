#include<bits/stdc++.h>
using namespace std;
bool binary_search(int arr[], int x, int start, int end){
    // base condition
    if(start>end) return false;
    // code
    int mid=start+(end-start)/2;
    if(arr[mid]==x) return true;
    else if(arr[mid]>x) return binary_search(arr,x,start,mid-1);
    else if(arr[mid]<x) return binary_search(arr,x,mid+1,end);
}
int main(){
    int arr[]={1,6,9,14,19,71};
    int x=59;
    cout<<binary_search(arr,x,0,5);
    return 0;
}