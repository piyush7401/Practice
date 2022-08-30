#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int i=2;
        string s1;
        s1.push_back(s[0]);
        while(i<s.size()-1){
            s1.push_back(s[i]);
            i=i+2;
        }
        s1.push_back(s[s.size()-1]);
        cout<<s1<<"\n";
    }
}
