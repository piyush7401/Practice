#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> p(n);
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            p[i].second = y;
            if(k>x){
                k = k - x;
                p[i].first = 0;
            }
            else{
                p[i].first = x - k;
                k = 0;
            }
        }
        int sum =0;
        for(int i=0;i<n;i++){
           sum = sum + p[i].first*p[i].second;
        }
        cout<<sum<<"\n";
    }
}
