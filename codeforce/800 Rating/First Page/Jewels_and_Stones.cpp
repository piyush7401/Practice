#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!='1')
        {
            for(int j=i+1;j<s1.size();j++)
            {
                if(s1[i]==s1[j])
                {
                    s1[j] = '1';
                }
            }
        }
    }
    int count =0;
    for(int i=0;i<s2.size();i++)
    {
        for(int j=0;j<s1.size();j++)
        {
            if(s1[j]==s2[i])
            {
                count++;
            }

        }
    }
    cout<<count<<'\n';
    }
}