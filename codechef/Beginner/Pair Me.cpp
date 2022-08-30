#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> p(3);
        for(int i=0;i<3;i++){
            cin>>p[i];
        }
        sort(p.begin(),p.end());
        if(p[0] + p[1] == p[2]){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
