#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum =0;
    if(s[0] - 97 > 13){
        sum = 26 - s[0] + 97;
    }
    else{
        sum = s[0] - 97;
    }
    int i = 0;
    while(i<s.size()-1){
        if(abs(s[i+1] - s[i]) > 13){
            sum =sum + 26 - abs(s[i+1] - s[i]);
        }
        else{
            sum = sum + abs(s[i+1] - s[i]);
        }
        i++;
    }
    cout<<sum;
}
