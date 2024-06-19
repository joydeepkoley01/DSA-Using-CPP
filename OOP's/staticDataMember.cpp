// static Data Member
// Static Member Function
// They are attributes of classes or class member
#include<iostream>
using namespace std;
class customer{
    private:
    string name;
    int account_number;
    int balance;
    static int total_customer;
    static int total_amount;

    public:
    customer(string name,int account_number, int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
        total_amount+=balance;
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            total_amount+=amount;
        }
    }
    void withdraw(int amount){
        if(amount>0){
            balance-=amount;
            total_amount-=amount;
        }
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;
    }
    static void access_total(){
        cout<<"No of Customers : "<<total_customer<<endl;
        cout<<"Total balance : "<<total_amount<<endl;
    }
};
int customer::total_customer=0;
int customer::total_amount=0;

int main(){
    customer A1("Raju",1452,1000);
    customer A2("Sujon",1459,1750);
    customer A3("Modon",1475,2000);
    A1.deposit(1001);
    customer::access_total();
    A3.withdraw(971);
    customer::access_total();
    return 0;
}