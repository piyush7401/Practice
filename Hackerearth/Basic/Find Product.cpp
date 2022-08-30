#include<bits/stdc++.h>
using namespace std;
int const N = 1e9 + 7;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int ans =1;
    for(int i=0;i<n;i++){
        ans = (ans * p[i])%N;
    }
    cout<<ans;
}
