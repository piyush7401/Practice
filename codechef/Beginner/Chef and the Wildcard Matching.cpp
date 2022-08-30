#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> p1(t);
    vector<string> p2(t);
    for(int i=0;i<t;i++){
        cin>>p1[i]>>p2[i];
    }
    int flag =0;
    for(int i=0;i<t;i++){
        for(int j=0;j<p1[i].size();j++){
            if(p1[i][j] != p2[i][j] && p1[i][j] != '?' && p2[i][j] != '?'){
                cout<<"No"<<"\n";
                flag =1;
                break;
            }
        }
        if(flag==0){
            cout<<"Yes"<<"\n";
        }
    }
}
