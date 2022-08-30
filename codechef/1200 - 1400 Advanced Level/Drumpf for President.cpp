#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        int flag =0;
        cin>>n>>k;
        map<int,int> m;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(i == x){
                cout<<0<<"\n";
                flag =1;
                break;
            }
            else{
                m[x]++;
            }
        }
        int sum =0;
        if(flag ==0){
            for(auto value : m){
                if(value.second >= k){
                    sum++;
                }
            }
            cout<<sum<<"\n";
        }
    }
}
