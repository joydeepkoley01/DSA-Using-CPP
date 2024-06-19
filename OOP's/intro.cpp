#include<iostream>
using namespace std;
class student{
    private:
    string name, grade;
    int roll_number,age;

    //  setter 
    public:
    //implementation using function
    void setname(string s){
        name=s;
    }
    void setroll(int roll){
        roll_number=roll;
    }
    void setgrade(string s){
        grade = s;
    }
    void setage(int a){
        age=a;
    }

    // getter
    void getname(){
        if(name.size()==0){
            cout<<"Invalid name!"<<endl;
            return;
        }
        cout<<name<<endl;
    }
    void getage(){
        if(age<=0 || age>=100){
            cout<<"Invalid age!"<<endl;
            return;
        }
        cout<<age<<endl;
    }
    void getroll(){
        cout<<roll_number<<endl;
    }
    void getgrade(int pin){
        if(pin==7896){
            cout<<grade<<endl;
        }
        else cout<<"Invalid pin";
    }
};
int main(){
    // student s1;
    // s1.name = "Raju";
    // s1.roll_number = 48;
    // s1.grade = "EX";
    // s1.age = 18;

    // student s2;
    // s2.name = "Shyam";
    // s2.roll_number = 52;
    // s2.grade = "A";
    // s2.age = 20;

    // student s3;
    // s3.name = "Jadu";
    // s3.roll_number = 59;
    // s3.grade = "B";
    // s3.age = 19;


    //Alternative way when your data is private
    student s1;
    s1.setname("");
    s1.setage(18);
    s1.setgrade("A+");
    s1.setroll(48);

    student s2;
    s2.setname("Shyam");
    s2.setage(100);
    s2.setgrade("A");
    s2.setroll(52);

    student s3;
    s3.setname("Jadu");
    s3.setage(19);
    s3.setgrade("B");
    s3.setroll(59);
    
    // printing
    s1.getname();
    s2.getage();
    s3.getroll();
    s3.getgrade(7897);

    return 0;
}