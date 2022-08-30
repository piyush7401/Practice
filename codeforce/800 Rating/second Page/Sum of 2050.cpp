#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int a = n%2050;
        n = n/2050;
        int flag =0;
        if(n ==0 || a !=0){
            cout<<-1<<"\n";
            flag =1;
        }
        if(flag ==0){
        int sum =0;
        while(n>0){
            sum = sum + n%10;
            n = n/10;
        }
        cout<<sum<<"\n";
        }
    }
    
}
