#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
            map<int,int> m;
            int n;
            cin>>n;
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                m[x]++;
            }
            int sum =0;
            for(auto value:m){
                int a = value.second;
                while(a--){
                cout<<n-value.second<<" ";
                }
                n = n - value.second;
            }
            cout<<"\n";
        }
}
