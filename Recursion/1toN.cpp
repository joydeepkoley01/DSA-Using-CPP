#include<bits/stdc++.h>
using namespace std;
void print12n(int n){
    if(n<1) return;
    print12n(n-1);
    cout<<n<<" ";
}
int main(){
    print12n(10);
    return 0;
}