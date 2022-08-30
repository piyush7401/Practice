#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int sum =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='D'){
            sum++;
        }
    }
    if((sum==s.size()/2)&&(s.size()%2==0)){
        cout<<"Friendship";
    }
    else if(sum>s.size()/2){
        cout<<"Danik";
    }
    else{
        cout<<"Anton";
    }
}
