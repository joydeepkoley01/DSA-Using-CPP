#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    // objects
    int data;
    Node *left, *right;
    // constructor
    Node(int value){
        data=value;
        left=right=NULL;
    }

};
Node *BinaryTree(){
    int x;
    cin>>x;
    if(x==-1) return NULL;
    // Node creation
    Node *temp = new Node(x);
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left=BinaryTree(); //left sub-tree
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right=BinaryTree(); //right sub-tree
    return temp;
}
int main(){
    cout<<"Enter the root : ";
    BinaryTree();
    
    return 0;
}