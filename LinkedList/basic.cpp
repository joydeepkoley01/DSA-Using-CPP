#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    /*// static way 
    node A1;
    A1.data=4;
    A1.next=NULL;
    // dynamic way
    node *head;  //creating memory/pointer of type node
    head = new node();
    head->data=4;
    head->next=NULL; */
    // after creating constructor 
    node *head;
    head=new node(4);
    cout<<head;
    return 0;
}