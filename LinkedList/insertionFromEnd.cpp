#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data; 
        next=NULL;
    }
};
int main(){
    int arr[]={4,5,6,8,9,10};
    int n=sizeof(arr)/4;  
    node*head;
    head=NULL;
    for(int i=0;i<n;i++){
        if(head==NULL){
            head=new node(arr[i]);
        }else{
            node *tale=head;
            while(tale->next!=NULL){
                tale=tale->next;
            }
            tale->next=new node(arr[i]);
        }
    }
    // printing the link list
    node *k=head;
    while(k!=NULL){
        cout<<k->data<<"  ";
        k=k->next;
    }
    return 0;
}