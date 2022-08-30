#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            if(a>2*b){
                cout<<a*a<<"\n";
            }
            else if(2*b>=a){
                cout<<4*b*b<<"\n";
            }
        }
        else if(a<b){
            if(b>2*a){
                cout<<b*b<<"\n";
            }
            else if(2*a>=b){
                cout<<4*a*a<<"\n";
            }
        }
        else{
            cout<<4*a*a<<"\n";
        }
    }
}
