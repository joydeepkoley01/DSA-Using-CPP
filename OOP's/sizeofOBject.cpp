#include<iostream>
using namespace std;
class a{
    //empty class
};
class b{
    int y;
    char x;
    char z;
};
int main(){
    a obj;
    b obc;
    cout<<sizeof(obj)<<endl;
    cout<<sizeof(obc)<<endl;
    return 0;
}