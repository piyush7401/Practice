#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int fag =0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'Y'){
                cout<<"NOT INDIAN"<<"\n";
                fag =1;
                break;
            }
            else if(s[i] == 'I'){
                cout<<"INDIAN"<<"\n";
                fag =1;
                break;
            }
        }
        if(fag ==0){
            cout<<"NOT SURE"<<"\n";
        }
        
    }
}
