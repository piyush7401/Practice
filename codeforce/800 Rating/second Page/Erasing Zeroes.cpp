#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum =0;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j] && s[i]=='1'){
                    sum=sum + (j-i-1);
                    i = j;
                }
            }
        }
        cout<<sum<<"\n";
    }
}
