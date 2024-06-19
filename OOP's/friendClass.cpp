#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int age;
    int balance;
    // creating friend class 
    // friend class can access or modify the objects created by class
    // for private, protected or public
    friend class customerB;
    // parameterised constructor
    customer(string name, int age, int balance){
        this->name=name;
        this->age=age;
        this->balance=balance;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<balance<<endl;
    }
};
class customerB{
    public:
    void display(customer& t){
        cout<<"The name of the customer is : "<<t.name<<endl;
        cout<<"The age of the customer is : "<<t.age<<endl;
        cout<<"The balance of the customer is : "<<t.balance<<endl;
    }
};
int main(){
    customer c1("Anwesa",17,25000);
    customerB c2;
    //c1.display();
    c2.display(c1);
    return 0;
}