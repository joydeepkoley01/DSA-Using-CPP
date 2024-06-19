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
Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1) return NULL;
    Node* temp=new Node(x);
    // left part
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left=BinaryTree();
    // right part
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right=BinaryTree();
    return temp;
}
void InOrder(Node *root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}
void PreOrder(Node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);

}
void PostOrder(Node *root){
    if(root==NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    cout<<"Enter the root node : ";
    Node* root;
    root=BinaryTree();
    cout<<"Preoder Traversal will be : ";
    PreOrder(root);
    return 0;
}