#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a ,vector<int>&b, vector<int>&res){
    int i=0; // vector a
    int j=0; // vector b
    int k=0; // vector res
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) res[k++]=b[j++];
        else res[k++]=a[i++];
    }
    if(i==a.size()) while(j<b.size()) res[k++]=b[j++];
    else if(j==b.size()) while(i<a.size()) res[k++]=a[i++];
}
void mergeSort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2, n2=n-n/2;  // n1=4, n2=5
    vector<int>a(n1),b(n2);
    // putting value into a and b
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[i+n1];
    // recursive mergeSort
    mergeSort(a);
    mergeSort(b);
    // merge
    merge(a,b,v);
}
int main(){
    // int arr[]={1,4,5,8};
    // int n1=sizeof(arr)/4;
    // vector<int> a(arr,arr+n1);

    // int brr[]={2,3,6,7,10,12};
    // int n2=sizeof(brr)/4;
    // vector<int>b(brr,brr+n2);

    // vector<int>res(n1+n2);
    // merge(a,b,res);
    // for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
    int arr[]={10,98,7,15,12,19,72,61,14};
    int n=sizeof(arr)/4; // size=9
    vector<int>v(arr,arr+n);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}