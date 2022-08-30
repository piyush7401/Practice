#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n+1];
        for(int i=1;i<n+1;i++){
            cin>>arr[i];
        }
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            int gc =0;
            for(int j=1;j<l;j++){
                gc = __gcd(gc,arr[j]);
            }
            for(int j=r+1;j<n+1;j++){
                gc = __gcd(gc,arr[j]);
            }
            cout<<gc<<"\n";
        }
    }
}
