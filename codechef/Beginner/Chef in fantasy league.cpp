#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        vector<int> j;
        vector<int> l;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
                j.push_back(p[i]);
            }
            else{
                l.push_back(p[i]);
            }
        }
        sort(j.begin(),j.end());
        sort(l.begin(),l.end());
        if(100 - k - j[0] - l[0] >= 0){
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }
    }
}
