#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        vector<long long int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        sort(p.begin(),p.end());
        for(int i=0;i<k;i++){
            p[n-1] = p[n-1] + p[n-2-i];
        }
        cout<<p[n-1]<<"\n";
    }
}
