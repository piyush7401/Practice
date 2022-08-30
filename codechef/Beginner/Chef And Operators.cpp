#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    pair<int,int> p;
    while(t--){
        cin>>p.first>>p.second;
        if(p.first>p.second){
            cout<<">"<<"\n";
        }
        else if(p.first<p.second){
            cout<<"<"<<"\n";
        }
        else{
            cout<<"="<<"\n";
        }
    }
}
