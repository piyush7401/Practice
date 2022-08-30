#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]>=65 && s1[i]<=90){
            s1[i] = s1[i] + 32;
        }
    }
    for(int j=0;j<s1.size();j++){
        if(s2[j]>=65 && s2[j]<=90){
            s2[j] = s2[j] + 32;
        }
    }
    if(s1==s2){
        cout<<0;
    }
    else if(s1<s2){
        cout<<-1;
    }
    else{
        cout<<1;
    }
}
