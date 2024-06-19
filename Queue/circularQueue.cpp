#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int size;
    int front,rear;
    public:
    Queue(int n){
        arr=new int[n];
        front=-1;
        size=n;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return front==(rear+1)%size;
    }
    void push(int x){
        if(isFull()){
            cout<<"Queue Overflow!!\n";
        }
        else if(isEmpty()){
            front=rear=0;
            arr[0]=x;
            cout<<"Pushed "<<x<<" into the array !!\n";
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the array !!\n";
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue Underfow!!\n";
            return;
        }
        else{
            cout<<"Popped "<<arr[front]<<" from the array !!\n";
            if(front==rear) front=rear=-1;
            else{
                front=(front+1)%size;
            }
            return;
        }
    }
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty...\n";
            return -1;
        }
        else return arr[front];
    }
    int end(){
        if(isEmpty()) {
            cout<<"Queue is empty...\n";
            return -1;
        }
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
    q.pop();
    cout<<"start is "<<q.start()<<endl;
    cout<<"end is "<<q.end()<<endl;
    q.push(20);
    cout<<"start is "<<q.start()<<endl;
    cout<<"end is "<<q.end()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<"start is "<<q.start()<<endl;
    cout<<"end is "<<q.end()<<endl;
    return 0;
}