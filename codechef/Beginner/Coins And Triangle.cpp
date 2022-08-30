#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=0;
        while(i*(i+1)/2 <= n){
            ++i;
        }
        cout<<--i<<"\n";
    }
}
