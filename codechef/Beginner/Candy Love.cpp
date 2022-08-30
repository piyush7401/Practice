#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        if(accumulate(p.begin(), p.end(), 0)%2==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
