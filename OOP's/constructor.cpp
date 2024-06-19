#include<iostream>
using namespace std;
class customer{
    int age;
    int balance;
    string nominee; 
    public:

    customer(){   // default constructor
        age=18;
        balance=2500;
        nominee="Government";
    }
    //parameterised constructor
    customer(int a, string n, int b){  
        age = a;
        balance = b;
        nominee = n;
    }
    // Constructor Overloading
    customer(int age, int balance){
        this->age=age;
        this->balance=balance;
        this->nominee=nominee;
    }
    // Inline Constructor
    inline customer(string a, int b, int c): nominee(a),age(b),balance(c){
    }
    // copy constructor
    customer(customer &B){
        age=B.age;
        balance=B.balance;
        nominee=B.nominee;
    }
    void display(){
        cout<<age<<" "<<balance<<" "<<nominee<<endl;
    }
};
int main(){
    customer Ajay(45,"Aparna",35000); 
    customer Bijay(55,2500000);
    customer Sujoy("Joydeep",21,35000);
    customer Joy(Sujoy);
    Joy.display();
    Sujoy.display();
    Ajay.display();
    Bijay.display();
    return 0;
}