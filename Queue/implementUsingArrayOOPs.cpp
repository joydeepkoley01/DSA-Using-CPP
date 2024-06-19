#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int front,rear;
    int size;
    public:
    Queue(int n){
        arr=new int[n];
        front=-1,rear=-1;
        size=n;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return rear==size-1;
    }
    void push(int x){
        if(isFull()){
            cout<<"Element can't be pushed.  (Overflow)!!\n";
            return;
        }
        else if(isEmpty()){
            cout<<"Pushed "<<x<<" into the array!\n";
            front=rear=0;
            arr[0]=x;
        }
        else{
            cout<<"Pushed "<<x<<" into the array!\n";
            arr[++rear]=x;
        }
    }
    void pop(){
        if(isEmpty()) {
            cout<<"No element present.  (Underflow!!)\n";
            return;
        }
        else{
            cout<<"Popped "<<arr[front]<<" from the array!\n";
            if(front==rear) front=rear=-1;
            else front++;
        }
    }
    int start(){
        if(isEmpty()) cout<<"Queue is empty...\n";
        else return arr[front];
    }
    int end(){
        if(isEmpty()) cout<<"Queue is empty...\n";
        else return arr[rear];
    }
};
int main(){
    Queue q(5);
    q.push(19);
    q.push(75);
    q.push(38);
    q.push(23);
    q.push(71);
    q.push(71);
    q.pop();
    cout<<"end is "<<q.end()<<endl;
    cout<<"start is "<<q.start()<<endl;
    return 0;
}