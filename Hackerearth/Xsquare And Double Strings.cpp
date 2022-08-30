#include<bits/stdc++.h>
using namespace std;

void xsquare(){
    string s;
    cin>>s;
    int c = 1;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
                c++;
                cout<<"Yes"<<"\n";
                return;
            }
        }
    }
        cout<<"No"<<"\n";
        return ;
}



int main(){
    int t;
    cin>>t;
    while(t--){
        xsquare();
    }
}
