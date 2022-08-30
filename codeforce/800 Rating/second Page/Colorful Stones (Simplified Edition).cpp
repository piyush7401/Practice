#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string t;
    cin>>s>>t;
    int i=0;
    int j=0;
    while(i!=t.size()){
        if(s[j] == t[i]){
            j++;
            i++;
        }
        else{
            i++;
        }
    }
    cout<<j+1;
}
