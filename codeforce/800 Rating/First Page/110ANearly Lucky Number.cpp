#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum =0;
    for(int i=0;i<s.size();i++){
        if((s[i]=='4')||(s[i]=='7')){
            sum++;
        }
    }

    if((sum == 4) ||(sum == 7)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
