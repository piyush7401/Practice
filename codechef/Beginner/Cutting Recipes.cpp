#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        int g = 0;
        for(int j=0;j<p[i].size();j++){
            g = __gcd(g,p[i][j]);
        }
        for(int j=0;j<p[i].size();j++){
            cout<<p[i][j]/g<<" ";
        }
        cout<<"\n";
    }
}
