#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  int x,y;
        cin>>x>>y;
        cout<<((x/2)*(y/2)) + ((x - x/2)*(y-y/2))<<"\n";
    }
}
