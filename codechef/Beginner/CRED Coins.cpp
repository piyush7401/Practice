#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p(t);
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        p[i] = x*y;
    }
    for(int i=0;i<t;i++){
        cout<<p[i]/100<<"\n";
    }
}
