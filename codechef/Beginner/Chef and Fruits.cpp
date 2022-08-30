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
    for(int i=0;i<t;i++){
        int m;
        m = abs(p[i][0] - p[i][1]);
        if(m>p[i][2]){
            cout<<m-p[i][2]<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
}
