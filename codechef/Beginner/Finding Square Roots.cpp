#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v(t,0);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    for(int i=0;i<t;i++){
        int a = pow(v[i],0.5);
        cout<<a<<"\n";
    }
}
