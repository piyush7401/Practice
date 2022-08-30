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
        vector<int> v;
        v.push_back(s[0]);
        int flag =0;
        for(int i=0;i<n-1;i++){
            if(s[i+1] != s[i]){
                if(find(v.begin(),v.end(),s[i+1]) == v.end()){
                    v.push_back(s[i+1]);
                }
                else{
                    cout<<"NO"<<"\n";
                    flag =1;
                    break;
                }
            }
        }
        if(flag ==0){
            cout<<"YES"<<"\n";
        }
        
    }
}
