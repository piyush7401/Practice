#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<4;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    int s1,s2;
    for(int i=0;i<t;i++){
        s1 = max(p[i][0],p[i][1]);
        s2 = max(p[i][2],p[i][3]);
        sort(p[i].begin(),p[i].end());
        if(s1 == p[i][2] && s2 == p[i][3]){
            cout<<"YES"<<"\n";
        }
        else if(s1 == p[i][3] && s2 == p[i][2]){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
