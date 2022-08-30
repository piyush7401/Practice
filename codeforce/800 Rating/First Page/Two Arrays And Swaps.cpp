#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int i=0;
        while((i<k) && (a[i]<=b[n-1-i])){
            int t;
            t = b[n-1-i];
            b[n-1-i] = a[i];
            a[i] = t;
            i++;
        }
        int sum =0;
        for(int i=0;i<n;i++){
            sum =sum+a[i];
        }
        cout<<sum<<"\n";
    }
    
}
