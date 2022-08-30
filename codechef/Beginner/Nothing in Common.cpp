#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        map<int,int> m;
        for(int i=0;i<a;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        for(int i=0;i<b;i++){
            int y;
            cin>>y;
            m[y]++;
        }
        int sum =0;
        for(auto value: m){
            if(value.second > 1){
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
}
