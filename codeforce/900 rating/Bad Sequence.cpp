#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<int> st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{
            if(st.top() == '(' && s[i] == ')'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    if(st.empty()){
        cout<<"Yes"<<"\n";
    }
    else{
        if(st.top() == '('){
            st.pop();
            st.top() == ')';
            st.pop();
            if(st.empty()){
                cout<<"Yes"<<"\n";
            }
            else{
                cout<<"No"<<"\n";
            }
        }
        else{
            cout<<"No"<<"\n";
        }
    }
}
