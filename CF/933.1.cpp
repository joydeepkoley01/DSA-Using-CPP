#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>b(n);
        vector<int>c(m);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            c.push_back(x);
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i]+c[j]<=k) count++;
            }
        }
        cout<<count<<" ";
    }
    return 0;
}