#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            int i=1;
            while(i<n){
                cout<<i+1<<" "<<i<<" ";
                i=i+2;
            }
        }
        else{
            cout<<3<<" "<<1<<" "<<2<<" ";
            int i=4;
            while(i<n){
                cout<<i+1<<" "<<i<<" ";
                i = i+2;
            }
        }
        cout<<"\n";
    }
}
