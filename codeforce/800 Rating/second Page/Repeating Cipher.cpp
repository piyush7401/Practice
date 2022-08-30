#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s1;
    int i=0;
    int j=1;
    while(i!=n){
        s1.push_back(s[i]);
        i = i+j;
        j++;
    }
    cout<<s1;
}
