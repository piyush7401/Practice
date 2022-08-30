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
        if(p[i][p[i].size() - 1] == '0' || p[i][p[i].size() - 1] == '5' || p[i][p[i].size() - 1] == '6' || p[i][p[i].size() - 1] == '7' || p[i][p[i].size() - 1] == '9'){
          cout<<"HOSTED"<<"\n";  
        } 
        else{
            cout<<"NOT HOSTED"<<"\n";
        }
    }
}
