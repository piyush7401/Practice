#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            cout<<"\n";
        }
        else{
            s[i] = s[i]-32;
            cout<<s[i];
        }
    }
}
