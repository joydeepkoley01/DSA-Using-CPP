#include<iostream>
using namespace std;
int mazePath(int sr, int sc, int r, int c){
    if(sr>r || sc>c) return 0;
    else if(sr==r && sc==c) return 1;
    int rightWays=mazePath(sr,sc+1,r,c);
    int downWays=mazePath(sr+1,sc,r,c);
    return rightWays+downWays;
}
int main(){
    // int x,sr;
    // cout<<"Enter row and starting row : ";
    // cin>>x;
    // int y,sc;
    // cout<<"Enter column and starting column : ";
    // cin>>y>>sc;
    cout<<"The no of ways of ridng : "<<mazePath(1,1,5,5);
    return 0;
}