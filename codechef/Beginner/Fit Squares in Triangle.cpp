#include<bits/stdc++.h>
using namespace std;
int check(int n){
    if(n<1){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    return check(n-2) + n; 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n-2)/2 > 0)
        {
            n = (n-2)/2;
            cout<<check(n-1) + check(n)<<"\n";
        }
        else
        {
            cout<<0<<"\n";
        }
    }
}
