#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<string,string> > p(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first>>p[i].second;
        }
        for(int i=0;i<n;i++){
            int flag = 0;
            for(int j = 0;j<i;j++){
                if(p[i].first == p[j].first){
                    cout<<p[i].first<<" "<<p[i].second<<"\n";
                    flag = 1;
                }
            }
            for(int j = i+1;j<n && flag == 0;j++){
                if(p[i].first == p[j].first){
                    cout<<p[i].first<<" "<<p[i].second<<"\n";
                    flag = 1;
                }
            }
            if(flag == 0){
            cout<<p[i].first<<"\n";
            }
        }
    }
}
