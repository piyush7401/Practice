#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>=2 && y>=2){
            if(x == 2 && y==2){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
}
