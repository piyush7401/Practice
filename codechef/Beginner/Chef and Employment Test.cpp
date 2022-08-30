#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(k <= n-1){
            cout<<v[k]<<"\n";
        }
        else{
            cout<<v[n-1]<<"\n";
        }
    }
    
}
