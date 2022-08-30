#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(2*n);
        for(int i=0;i<2*n;i++){
            cin>>p[i];
        }
        sort(p.begin(),p.end());
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                cout<<p[n+(i/2)]<<" ";
            }
            else{
                cout<<p[(i-1)/2]<<" ";
            }
        }
        cout<<endl;
    }
}
