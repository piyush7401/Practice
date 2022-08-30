#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        x = x-y;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x1,y1;
            cin>>x1>>y1;
            m[x1] = y1;
        }
        int flag =0;
        for(auto value: m){
            if(value.second <= k && value.first >= x){
                cout<<"LuckyChef"<<"\n";
                flag =1;
                break;
            }
        }
        if(flag==0){
                cout<<"UnluckyChef"<<"\n";
        }
    }
}
