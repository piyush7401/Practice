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
        int sum1 = p[0].first + p[0].second;
        int sum2 = p[1].first + p[1].second;
        if(p[0].first == p[1].first && p[1].second == p[0].second){
            cout<<0<<"\n";
        }
        else if((sum1 % 2 == 0 && sum2 % 2 == 0)||(sum1 % 2 == 1 && sum2 % 2 == 1)){
            cout<<2<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
    }
}
