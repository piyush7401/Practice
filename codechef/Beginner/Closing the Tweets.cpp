#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> p(n+1,0);
    for(int i=0;i<k;i++){
        string s;
        cin>>s;
        if(s== "CLICK"){
            int x;
            cin>>x;
            if(p[x] == 0){
                p[x] =1;
            }
            else{
                p[x] =0;
            }
            cout<<accumulate(p.begin(), p.end(), 0)<<"\n";
        }
        else{
            for(int i=0;i<n+1;i++){
                p[i] =0;
            }
            cout<<0<<"\n";
        }
    }
}
