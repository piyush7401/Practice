#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag =0;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[p[i]]++;
        }
        for(auto value: m){
            if(value.second==1){
                cout<<find(p.begin(),p.end(),value.first) - p.begin() +1<<"\n";
                flag = 1;
                break;
            }
        }
        if(flag ==0){
            cout<<-1<<"\n";
        }
    }
}
