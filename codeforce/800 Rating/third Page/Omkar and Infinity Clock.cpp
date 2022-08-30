#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        vector<long long int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        if(k%2==0){
            int a = *max_element(p.begin(),p.end());
            for(int i=0;i<n;i++){
                p[i] = a - p[i];
            }
            int b = *max_element(p.begin(),p.end());
            for(int i=0;i<n;i++){
                p[i] = b - p[i];
                cout<<p[i]<<" ";
            }
        }
        else{
            int a = *max_element(p.begin(),p.end());
            for(int i=0;i<n;i++){
                p[i] = a - p[i];
                cout<<p[i]<<" ";
            }
        }
    }
}
