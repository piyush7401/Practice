#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--){
        for(int i=0;i<n;i++){
            if((s[i]=='B') && (s[i+1]=='G')){
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    cout<<s;
}
