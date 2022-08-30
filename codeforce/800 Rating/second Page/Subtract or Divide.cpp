#include<bits/stdc++.h>
using namespace std;

int divisor(int n){
    if(n==1){
        return 1;
    }
    else{
        for(int i = 2;i<n;i++){
            if(n%i==0){
                return i;
            }
        }
        return 1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=0;
        while(n!=1){
            if(divisor(n) != 1){
                n = divisor(n);
            }
            else{
                n = n-1;
            }
            i++;
        }
        cout<<i<<"\n";
    }
    
}
