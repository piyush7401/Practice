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
        int min = 1e6;
        for(int i=0;i<n-1;i++){
            if(min > p[i+1] - p[i]){
                min = p[i+1] - p[i];
            }
        }
        cout<<min<<"\n";
    }
}
