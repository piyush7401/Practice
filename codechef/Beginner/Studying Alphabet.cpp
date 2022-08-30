#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> p(26);
    for(int i=0;i<s.size();i++){
        p[s[i] - 97]++;
    }
    int n;
    cin>>n;
    while(n--){
        int flag =0;
        string p1;
        cin>>p1;
        for(int i=0;i<p1.size();i++){
            if(p[p1[i]-97] == 0){
                cout<<"No"<<"\n";
                flag =1;
                break;
            }
        }
        if(flag ==0){
            cout<<"Yes"<<"\n";
        }
    }
}
