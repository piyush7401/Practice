#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[i] = a%b;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<"\n";
    }
}

