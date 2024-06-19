#include<iostream>
using namespace std;
class customer{
    string name;
    int *data;
    public:
    // defaukt constructor
    customer(){
        name="4";
        cout<<"Constructor is "<<name<<endl;
    }
    // user defined costructor
    customer(string name){
        this->name=name;
        cout<<"Constructor is "<<name<<endl;
    }
    // destructor
    // its is called in reverse order
    ~customer(){
        cout<<"Destructor is "<<name<<endl;
    }
};
int main(){
    customer c1("1");
    customer c2("2");
    customer c3("3");
    // dynamically creating a class
    customer *c4=new customer;
    delete c4;// to call the destructor of C4
    return 0;
}