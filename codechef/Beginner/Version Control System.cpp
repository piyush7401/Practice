#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        map<int,int> p;
        for(int i=1;i<=n;i++){
            p[i]++;
        }
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            p[x]++;
        }
        for(int i=0;i<m;i++){
            int y;
            cin>>y;
            p[y]++;
        }
        int sum =0;
        int sum1 =0;
        for(auto value: p){
            if(value.second == 3){
                sum++;
            }
            else if(value.second == 1){
                sum1++;
            }
        }
        cout<<sum<<" "<<sum1<<"\n";
    }
}
