#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int flag =0;
        for(int i=0;i<s.size()-2;i++){
            if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0')||(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
                cout<<"Good"<<"\n";
                flag =1;
                break;
            }
        }
        if(flag ==0){
            cout<<"Bad"<<"\n";
        }
    }
}
