#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        if(q==1){
            string s;
            cin>>s;
            int x;
            cin>>x;
            if(m.find(s) != m.end()){
                (m.find(s))->second = (m.find(s))->second + x;
            }
            else{
                m.insert({s,x});
            }
        }
        else if(q==2){
            string s;
            cin>>s;
            m.find(s)->second = 0;
        }
        else if(q==3){
            string s;
            cin>>s;
            cout<<m[s]<<"\n";
        }
    }
}
