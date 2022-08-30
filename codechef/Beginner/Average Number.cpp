#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,v;
        cin>>n>>k>>v;
        vector<int> p(n);
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>p[i];
            sum = sum + p[i];
        }
        if((v*(n+k) - sum)>0 && (v*(n+k) - sum)%k == 0){
            cout<<(v*(n+k) - sum)/k<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
}
