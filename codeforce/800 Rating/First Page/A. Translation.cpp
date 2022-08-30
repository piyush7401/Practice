#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,m;
    cin>>s;
    cin>>m;
    string p;
    for(int i=s.size()-1;i>=0;i--)
    {
        p.push_back(s[i]);
    }
    if(m==p){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
