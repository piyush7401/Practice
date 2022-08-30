#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int b,n;
        cin>>n>>b;
        long long int max = 0;
        cout<<max<<" \n";
        for(int i=0;i<n;i = i+b){
            if(max < (n-i)*(i/b)){
                max = (n-i)*(i/b);
            }
        }
        cout<<max<<" \n";
    }
}
