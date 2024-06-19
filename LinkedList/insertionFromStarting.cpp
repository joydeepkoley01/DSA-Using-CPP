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
    // given array
    int arr[]={4,5,6,8,9,10};
    int n=sizeof(arr)/4;        // size of array
    node *head;
    head=NULL;
    // insertion into starting
    for(int i=0;i<n;i++){
        if(head==NULL){
            head=new node(arr[i]);
        }
        else{
            node *temp;
            temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
    // printing the values
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
    return 0;
}