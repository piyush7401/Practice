#include<bits/stdc++.h>
using namespace std;

void check(string v){
    for(int i=0;i<v.size();i++)
    {
        if(v[i] != v[v.size()-1-i])
        {
            cout<<"loses"<<"\n";
            return;
        }
    }
    cout<<"wins"<<"\n";
}


int main(){
       int n;
       cin>>n;
       vector<string> v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       for(int i=0;i<n;i++)
       {
           check(v[i]);
       }
    }

