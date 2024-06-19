#include<bits/stdc++.h>
using namespace std;
void reverse(string &str, int start, int end){
    // base condition
    if(start>end) return;
    swap(str[start],str[end]);
    reverse(str,start+1,end-1);
}
int main(){
    string str = "anwesa";
    reverse(str,0,str.length()-1);
    cout<<str;
    return 0;
}