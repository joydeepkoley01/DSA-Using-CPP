#include<bits/stdc++.h>
using namespace std;
int main(){
    // (name,marks)
    pair<string,int>p1;
    p1=make_pair("Joydeep",99);
    cout<<p1.first<<" "<<p1.second<<endl;
    // Alternative way
    // (name, marks)
    pair<string,int>p2;
    p2.first="JK";
    p2.second=100;
    cout<<p2.first<<" "<<p2.second<<endl;
    // (name,(age,marks))
    pair<string,pair<int,int>>p3,p4;
    p3=make_pair("Rahul",make_pair(21,100));
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
    // OR
    p4.first="Raj";
    p4.second.first=22;
    p4.second.second=98;
    return 0;