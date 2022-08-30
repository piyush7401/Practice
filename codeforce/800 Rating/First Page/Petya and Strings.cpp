#include<bits/stdc++.h>
using namespace std;

int fun(string s1,string s2){
    for(int i=0;i<s1.size();i++)
    {
        int sum = (int)s1[i]-(int)s2[i];
        if(sum > 0 && sum != 32)
        {
            return 1;
            
        }
        else if(sum < 0 && sum != -32)
        {
            return -1;
        }
        
    }
    return 0;
}

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<fun(s1,s2);
}
