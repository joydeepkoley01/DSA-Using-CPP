#include<iostream>
using namespace std;
// implementing stack using array
class stack{
    int *arr;
    int size;
    int top;
    public:
    // constructor
    stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    // push
    void push(int item){
        if (top==size-1) cout<<"Overflow!!! "<<item<<" can't be pushed!\n";
        else{
            top++;
            arr[top]=item;
            cout<<item<<" is pushed!\n";
        }
    }
    // pop
    void pop(){
        if (top==-1) cout<<"Underflow!!!\n";
        else {
            cout<<"Popped "<<arr[top]<<" from the stack...\n";
            top--;
        }
    }
    // isEmpty
    bool isEmpty(){
        return top==-1;
    }
    // peek
    void peek(){
        if (top==-1) {
            cout<<"Error!!!, There is no element in the array";
        }
        else cout<< arr[top]<<endl;
    }
    void isSize(){
        cout<<"Size of the array : "<< top+1<<endl;
    }

};
int main(){
    stack arr(5);
    arr.push(76);
    arr.push(-15);
    arr.push(30);
    arr.push(39);
    arr.push(-39);
    arr.isSize();
    arr.pop();
    arr.pop();
    arr.isSize();
    cout<<arr.isEmpty();
    return 0;
}