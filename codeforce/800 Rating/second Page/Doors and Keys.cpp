#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> p(3);
        int flag =0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'r' || s[i] == 'b' || s[i] == 'g'){
                if(s[i] == 'r'){
                    p[0]++;
                }
                else if(s[i] == 'b'){
                    p[1]++;
                }
                else{
                    p[2]++;
                }
            }
            else{
                if(s[i] == 'R'){
                    if(p[0] ==0){
                        cout<<"NO"<<"\n";
                        flag =1;
                        break;
                    }
                    else{
                        p[0]--;
                    }
                }
                else if(s[i] == 'B'){
                    if(p[1] == 0){
                        cout<<"NO"<<"\n";
                        flag =1;
                        break;
                    }
                    else{
                        p[1]--;
                    }
                }
                else{
                    if(p[2] == 0){
                        cout<<"NO"<<"\n";
                        flag =1;
                        break;
                    }
                    else{
                        p[2]--;
                    }
                }
            }
        }
        if(flag ==0){
            cout<<"YES"<<"\n";
        }
    }
}
