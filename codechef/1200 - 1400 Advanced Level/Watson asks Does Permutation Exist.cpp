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
        sort(p.begin(),p.end());
        int flag =0;
        for(int i=0;i<n-1;i++){
            if(p[i+1] - p[i] > 1){
                cout<<"NO"<<"\n";\
                flag =1;
                break;
            }
        }
        if(flag ==0){
            cout<<"YES"<<"\n";
        }
    }
}
