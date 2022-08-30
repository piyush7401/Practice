#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=i+2;j<s.size();j++){
            if(s[i]!='+' && s[j]!='+'){
                if((int)s[i]>(int)s[j])
                {
                    int temp;
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
    }
    cout<<s;
}
