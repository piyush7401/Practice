#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int min = 1e5+1;
        for(int i=0;i<n-1;i++){
            if(min> v[i+1] - v[i]){
                min = v[i+1] - v[i];
            }
        }
        cout<<min<<"\n";
    }
}
