#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string s1;
    int sum =0;
    int i=1;
    while(i<s.size()){
       s1 = s1 + s[i];
       i=i+3;
    }

    
    for(int m=0;m<s1.size();m++){
        for(int n=m+1;n<s1.size();n++){
            if(s1[m]==s1[n] && s1[m]!='1'){
                s1[n]='1';
            }
        }
    }
    for(int p=0;p<s1.size();p++){
        if(s1[p]>=97 && s1[p]<=122){
            sum++;
        }
    }
    cout<<sum;
}
