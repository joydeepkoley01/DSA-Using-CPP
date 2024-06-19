#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack<int>st1;
    stack<int>st2;
    public:
    bool isEmpty(){
        return st1.empty() && st2.empty();
    }
    void _push(int x){
        // st1 is using to perform only push operation
        st1.push(x);
    }
    int _pop(){
        // // st2 is using to perform only pop operation
        if(isEmpty()) return 0;
        if(!st2.empty()){
            int ele=st2.top();
            st2.pop();
            return ele;
        }
        else if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int ele=st2.top();
            st2.pop();
            return ele;
        }
    }
    int peek(){
        if(isEmpty()){
            return 0;
        }
        if(!st2.empty()){
            return st2.top();
        }
        else if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
};
int main(){

    return 0;
}