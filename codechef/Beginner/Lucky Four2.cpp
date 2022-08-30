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
        int sum =0;
        for(int j=0;j<p[i].size();j++){
            if(p[i][j] == '4'){
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
}
