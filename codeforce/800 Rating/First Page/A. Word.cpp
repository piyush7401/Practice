#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum1=0;
    int sum2 =0;
    for(int i=0;i<s.size();i++){
        if(s[i]<92){
            sum1++;
        }
        else{
            sum2++;
        }
    }
    if(sum2>=sum1){
        for(int j=0;j<s.size();j++){
            if(s[j]<92){
                s[j] = s[j] +32;
            }
        }
        cout<<s;
    }
    else{
        for(int k=0;k<s.size();k++){
            if(s[k]>92)
            {
                s[k] = s[k] - 32;
            }
        }
        cout<<s;
    }
    
}
