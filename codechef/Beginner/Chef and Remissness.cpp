#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<pair<int,int>> p(t);
    int x,y;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        p[i].first = max(x,y);
        p[i].second = x+y;
    }
    for(int i=0;i<t;i++){
        cout<<p[i].first<<" "<<p[i].second<<"\n";
    }
    
}
