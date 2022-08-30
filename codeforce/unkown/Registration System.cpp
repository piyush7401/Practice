#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
        if(m.find(s)->second ==1){
            cout<<"Ok"<<"\n";
        }
        else{
            cout<<s<<(m.find(s)->second)-1<<"\n";
        }
    }
}
