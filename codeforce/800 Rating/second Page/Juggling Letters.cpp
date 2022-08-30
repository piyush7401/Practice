#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        map<char,int> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<p[i].size();j++){
                m[p[i][j]]++;
            }
        }
        int flag =0;
        for(auto value: m){
            if(value.second%n != 0){
                cout<<"NO"<<"\n";
                flag =1;
                break;
            }
        }
        if(flag ==0){
            cout<<"YES"<<"\n";
        }
    }
}
