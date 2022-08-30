#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> v(101,0);
    v[0] = 1;
    v[1] = 2;
    for(int i=2;i<101;i++){
        v[i] = v[i-1] + v[i-2] + 1;
    }
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}
