#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> p(n);
        long long int min = 0;
        for(long long int i=0;i<n;i++){
            cin>>p[i];
        }
        for(long long int i=0;i<n-1;i++){
            if(min< p[i+1] - p[i]){
                min = p[i+1] - p[i];
            }
        }
        if(min ==0){
            cout<<"UNFIT"<<"\n";
        }
        else{
            cout<<min<<"\n";
        }
    }
}
