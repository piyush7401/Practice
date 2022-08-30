#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<s1.size()<<" ";
    cout<<s2.size()<<"\n";
    string s = s1 + s2;
    cout<<s<<"\n";
    char p;
    p = s1[0];
    s1[0] = s2[0];
    s2[0] = p;
    cout<<s1<<" "<<s2;


}