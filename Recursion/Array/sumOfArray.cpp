#include<bits/stdc++.h>
using namespace std;
int sumOfArray(int arr[],int s){
    if(s==1) return arr[0]; 
    return arr[s-1] + sumOfArray(arr,s-1);
}
int main(){
    int arr[]={1,2,4,4,5,9};
    int size=sizeof(arr)/4;
    cout<<sumOfArray(arr,size);
    return 0;
}