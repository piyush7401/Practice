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
        int sum1=0;
        int sum2=0;
        int i=n-1;
        while(i>0){
            sum2 = sum2 + p[i];
            i = i-2;
        }
        for(int i=0;i<n;i++){
            sum1 = sum1 + p[i];
        }
        sum1 = sum1 - sum2;
        cout<<max(sum1,sum2)<<"\n";
    }
}
