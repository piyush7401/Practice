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
        if(n!=1){
            sort(p.begin(),p.end());
            if(p[0] + p[n-1] <= k){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else{
            cout<<"YES"<<"\n";
        }
        
    }
}
