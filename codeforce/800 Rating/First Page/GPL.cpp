#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum =0;
        for(int i=0;i<n;i++){
            int integer = s[i] - '0';
            integer = integer*pow(2,n-i-1);
            sum =sum + integer;
        }
        cout<<sum<<"\n";
    }
}
