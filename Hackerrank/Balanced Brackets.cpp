#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        stack<char> p;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                p.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(!p.empty())
                {
                    if(p.top() == '(' && s[i]==')'){
                        p.pop();
                    }
                    else if(p.top() == '[' && s[i] == ']'){
                        p.pop();
                    }
                    else if(p.top() == '{' && s[i] == '}'){
                        p.pop();
                    }
                    else{
                        p.push(s[i]);
                    }    
                }
                else{
                    p.push(s[i]);
                }
                
            }
        }
        if(p.empty()){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
