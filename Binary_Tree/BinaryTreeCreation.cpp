#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
int main(){
    int x;
    cout<<"Enter root element : ";
    cin>>x;
    int first,second;
    queue<Node *>q;
    Node *root=new Node(x);
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" : ";
        cin>>first; //left node element
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left); //inserting the left node address
        } 
        cout<<"Enter the right child of "<<temp->data<<" : ";
        cin>>second; //right node element
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right); //inserting the right node address
        } 
    }
    return 0;
}