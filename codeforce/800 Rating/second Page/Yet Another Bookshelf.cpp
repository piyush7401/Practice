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
        int sum =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(p[i] ==1 && p[j]==1){
                    sum = sum + (j-i-1);
                    i=j;
                }
            }
        }
        cout<<sum<<"\n";
    }
}
