#include<bits/stdc++.h>
using namespace std;
float power(int x, int y){
    if(y==0) return 1;
    else if(y==1) return x;
    else if(y<0){
        int z=-y;
        return 1/(x*power(x,z-1));
    }
    else return x*power(x,y-1);
    
}
int main(){
    int p=0;
    cout<<"2 ^ "<<p<<" is = "<<power(2,p);
    return 0;
}