#include<bits/stdc++.h>
using namespace std;

string l_string(string s){
    string s1;
    for(int i=1;i<s.size();i++){
        s1.push_back(s[i]);
    }
    s1.push_back(s[0]);
    return s1;
}

string r_string(string s){
    string s1;
    s1.push_back(s[s.size()-1]);
    for(int i=0;i<s.size()-1;i++){
        s1.push_back(s[1]);
    }
    return s1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(l_string(s) == r_string(s)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
