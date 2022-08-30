#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a/(b*b) <= 18){
            cout<<1<<"\n";
        }
        else if(a/(b*b) > 18 && a/(b*b) < 25){
            cout<<2<<"\n";
        }
        else if(a/(b*b) > 24 && a/(b*b) <30){
            cout<<3<<"\n";
        }
        else if(a/(b*b) >= 30){
            cout<<4<<"\n";
        }
    }
}
