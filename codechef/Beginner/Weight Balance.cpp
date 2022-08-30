#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> p(2);
        for(int i=0;i<2;i++){
            cin>>p[i].first>>p[i].second;
        }
        int m;
        cin>>m;
        p[0].first = p[0].second - p[0].first;
        p[1].first = p[1].second - p[1].first;
        p[1].first = p[1].first*m;
        if(p[0].first < p[1].first){
            cout<<0<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
    }
}
