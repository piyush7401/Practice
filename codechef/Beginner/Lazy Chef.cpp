#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    int sum =0;
    for(int i=0;i<t;i++){
        sum = min(p[i][0]*p[i][1],p[i][0]+p[i][2]);
        cout<<sum<<"\n";
    }
}
