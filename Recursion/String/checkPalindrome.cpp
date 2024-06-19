#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str,int start, int end){
    if(start>=end) return true;
    else if(str[start]!=str[end]) return false;
    return checkPalindrome(str,start+1,end-1);
}
int main(){
    string str="ccababababacc";
    cout<<checkPalindrome(str,0,str.length()-1);
    return 0;
}