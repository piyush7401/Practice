#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int count =0;
        for(int i=0;i<s1.size();i++){
            for(int j=0;j<s1.size();j++){
                if(s1[i]==s2[j] && s1[i]!='2'){
                    count++;
                    s2[j] = s1[i]= '2';
                    
                }
            }
        }
        cout<<2*(s1.size()-count);
        
    }
}
