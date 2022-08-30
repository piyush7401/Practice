#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        vector<int> q(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            cin>>q[i];
        }
        for(int i=0;i<n;i++){
            int x = max(p[i],q[i]);
            int y = min(p[i],q[i]);
            p[i] = x;
            q[i] = y;   
        }
        cout<<*max_element(p.begin(),p.end())*(*max_element(q.begin(),q.end()))<<"\n";
    }
}
