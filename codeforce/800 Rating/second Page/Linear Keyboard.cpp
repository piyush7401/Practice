#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]] = i+1;
        }
        string s1;
        cin>>s1;
        int sum =0;
        for(int i=0;i<s1.size()-1;i++){
            sum = sum + abs(m.find(s1[i+1])->second - m.find(s1[i])->second);  
        }
        cout<<sum<<"\n";
    }
}
