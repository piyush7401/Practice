#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        pair<int,int> p;
        cin>>p.first>>p.second;
        if(p.second - p.first >= 0){
            if((p.second - p.first)%2==0){
                cout<<(p.second - p.first)/2<<"\n";
            }
            else{
                cout<<((p.second - p.first) + 1)/2 +1<<"\n"; 
            }
        }
        else{
            cout<<abs(p.second - p.first)<<"\n";
        }
    }
}
