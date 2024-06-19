#include<bits/stdc++.h>
using namespace std;
int countVowel(string str, int idx){
    // base condition
    if(idx==-1) return 0;

    else if(str[idx]=='a'||str[idx]=='e'||str[idx]== 'i'|| str[idx]=='o'||str[idx]=='u') return 1 + countVowel(str, idx-1);
    return countVowel(str, idx-1);
}
int main(){
    string str="joydeep";
    cout<<countVowel(str,str.length()-1);
    return 0;
}