#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s;
        cin>>s1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='a'||'e'||'i'||'o'||'u')
            {
                s.push_back(s1[i]);
            }
        }
        string s2, s3 ;
        s2 = s;
        sort(s2.begin(),s2.end());
        s3 = s2;
        reverse(s3.begin(),s3.end());
        if(s1 == s2)
        {
            cout<<"Good";
        }
        else if(s1 == s3)
        {
            cout<<"Worst";
        }
        else
        {
            cout<<"Bad";
        }
    }
}