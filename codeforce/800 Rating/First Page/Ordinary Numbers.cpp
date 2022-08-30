#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1;
        for(int i=0;i<s.size();i++){
            s1.push_back(s[0]);
        }
        if(s >= s1){
            cout<<(s.size()-1)*9 + (s[0]-48)<<"\n";
        }
        else{
            if(s[0]== '1'){
                cout<<(s.size()-1)*9<<"\n";
            }
            else{
                cout<<(s.size()-1)*9 + (s[0] - 49)<<"\n";
            }
        }
    }
}
