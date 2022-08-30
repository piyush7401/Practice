#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> p(t);
    for(int i=0;i<t;i++){
        cin>>p[i];
    }
    for(int i=0;i<t;i++){
        if((p[i].size())%2==1){
            cout<<"NO"<<"\n";
        }
        else{
            string s;
            for(int j=0;j<p[i].size()/2;j++){
                s.push_back(p[i][j]);
            }
            s = s+s;
            if(s==p[i]){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
            
        }
    }
}
