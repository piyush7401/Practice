#include<bits\stdc++.h>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    string s2;
    s2 = s1;
    reverse(s1.begin(),s1.end());
    if(s2 == s1){
        cout<<"YES";
    }
    else {
        cout<<"No";
    }
}