#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum =0;
        while(n>0){
            int i=1;
            while(i*i <= n){
                i++;
            }
            n = n - (i-1)*(i-1);
            sum++;;
        }
        cout<<sum<<"\n";
    }
}
