#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<pair<int,int>> p(t);
    for(int i=0;i<t;i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i =0;i<t;i++){
        if(p[i].first < p[i].second){
            if((p[i].second - p[i].first)%2 == 0){
                cout<<2<<"\n";
            }
            else{
                cout<<1<<"\n";
            }
        }
        else if(p[i].first > p[i].second){
            if((p[i].first - p[i].second)%2 == 0){
                cout<<1<<"\n";
            }
            else{
                cout<<2<<"\n";
            }
        }
        else{
            cout<<0<<"\n";
        }
    }
}
