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
        int k;
        cin>>k;
        int a = p[k-1];
        sort(p.begin(),p.end());
        for(int i=0;i<n;i++){
            if(p[i] == a){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
}
