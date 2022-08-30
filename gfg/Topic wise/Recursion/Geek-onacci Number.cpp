#include<bits/stdc++.h>
using namespace std;

int recursion(int a,int b,int c,int n){
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    else if(n==3){
        return c;
    }
    else{
        return recursion(a,b,c,n-1) + recursion(a,b,c,n-2) + recursion(a,b,c,n-3);
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        cout<<recursion(a,b,c,n)<<"\n";
    }
}
