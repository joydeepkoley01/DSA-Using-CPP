#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&v,int start, int idx){

}
void quickSort(vector<int>&v,int start, int end){
    int n=v.size();
    int pivot=partition(v,0,n-1);
    // left part
    quickSort(v,start,pivot-1);
    // right part
    quickSort(v,pivot+1,end);
}
int main(){
    int arr[]={10,20,32,12,19,65,14};
    int n = sizeof(arr)/4;
    vector<int>v(arr,arr+n);
    // calling the quick sort function
    quickSort(v,0,n-1);
    cout<<"After soting the array becomes : ";
    // printing the array
    for(auto &ele: arr){
        cout<<ele<<" ";
    }
    return 0;
}