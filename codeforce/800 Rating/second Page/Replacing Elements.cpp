#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        sort(p.begin(),p.end());
        if(p[p.size() - 1] <= k){
            cout<<"YES"<<"\n";
        }
        else{
            if(p[0] + p[1] <= k){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
    }
}
