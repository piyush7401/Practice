#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            n = n/2;
            cout<<2*n*(n+1)*(2*n+1)/3<<"\n";
        }
        else{
            n = n/2 + 1;
            cout<<n*(2*n-1)*(2*n+1)/3<<"\n";
        }
    }
}
