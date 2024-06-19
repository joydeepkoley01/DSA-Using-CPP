#include<bits/stdc++.h>
using namespace std;
void lower2Upper(string &str,int idx){ // call by value by default
    if(idx==str.length()) return;
    str[idx]-=32;
    lower2Upper(str,idx+1);
}
int main(){
    string str="i love you baby";
    lower2Upper(str,0);
    cout<<str;
    return 0;
}