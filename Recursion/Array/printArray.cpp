#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    if(n==0) return;
    printArray(arr,n-1);
    cout<<arr[n-1]<<" ";
}
int main(){
    int arr[]={10,11,45,41,12,15};
    printArray(arr,6);
    return 0;
}