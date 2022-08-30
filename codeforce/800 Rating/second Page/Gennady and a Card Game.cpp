#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string> p(5);
    for(int i=0;i<5;i++){
        cin>>p[i];
    }
    int flag =0;
    for(int i=0;i<5;i++){
        if(s[0] == p[i][0] || s[1] == p[i][1]){
            cout<<"YES"<<"\n";
            flag =1;
            break;
        }
    }
    if(flag==0){
        cout<<"NO"<<"\n";
    }
}
