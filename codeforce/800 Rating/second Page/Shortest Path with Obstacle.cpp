#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> p(3);
        for(int i=0;i<3;i++){
            cin>>p[i].first>>p[i].second;
        }   
        if(p[0].first == p[1].first && p[0].first == p[2].first){
            if((p[2].second > min(p[0].second,p[1].second)) && (p[2].second < max(p[0].second,p[1].second))){
                cout<<abs(p[0].second - p[1].second) + 2<<"\n";
            }
            else{
                cout<<abs(p[0].second - p[1].second)<<"\n";
            }
        }
        else if(p[0].second == p[1].second && p[0].second == p[2].second){
            if((p[2].first > min(p[0].first,p[1].first)) && (p[2].first < max(p[0].first,p[1].first))){
                cout<<abs(p[0].first - p[1].first) + 2<<"\n";
            }
            else{
                cout<<abs(p[0].first - p[1].first)<<"\n";
            }
        }
        else{
            cout<<abs(p[0].first-p[1].first) + abs(p[0].second - p[1].second)<<"\n";
        }
    }
}
