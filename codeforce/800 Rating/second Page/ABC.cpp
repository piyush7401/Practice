#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag =0;
        for(int i=0;i<n-1;i++){
            if(s[i] == s[i+1]){
                cout<<"NO"<<"\n";
                flag =1;
                break;
            }
        }
        int flag1 =0;
        if(flag ==0){
            for(int i=0;i<n-2;i++){
                if(s[i] == s[i+2] && s[i] != s[i+1]){
                    cout<<"NO"<<"\n";
                    flag1 =1;
                    break;
                }
            }
        }
        if(flag==0 && flag1==0){
            cout<<"YES"<<"\n";
        }
    }
}
