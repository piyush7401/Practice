#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>p(n,k);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            p[i] = p[i] + x;
        }
        int sum =0;
        for(int i=0;i<n;i++){
            if(p[i]%7==0){
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
}
