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
        vector<int> p1(n,1);
        for(int i=n-2;i>0;i--){
            if(p[i+1]*p[i] < 0){
                p1[i] = p1[i+1] + 1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<p1[i]<<" ";
        }
        cout<<"\n";
    }
}
