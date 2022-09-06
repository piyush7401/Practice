#include<bits/stdc++.h>
using namespace std;

 string fun(string s,string s1,int index,int n){
        if(index >= n){
            string s2;
            s2 = s1;
            reverse(s2.begin(),s2.end());
            if(s1 == s2){
                return s1;
            }
            else{
                return 0;
            }
        }
        s1.push_back(s[index]);
        string left = fun(s,s1,index+1,n);
        s1.pop_back();
        string right = fun(s,s1,index+1,n);
        if(right.size() > left.size()){
            return right;
        }
        else{
            return left;
        }
    }
    
    string longestPalindrome(string s) {
        int n =  s.size();
        int index = 0;
        string s1;
        return fun(s,s1,index,n);
    }


int main(){
    string s;
    cin>>s;
    cout<<longestPalindrome(s);
}