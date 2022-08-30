#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int sum =0;
        for(auto value: m){
            if(value.first%2==1){
                sum = sum + value.second;
            }
        }
        cout<<sum<<"\n";
    }
}
