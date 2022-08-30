#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int max = 0;
    int min  = 1000;
    int mini =0;
    int maxi = 0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(max<a){
            max = a;
            maxi = i;
        }
        if(min>=a){
            min = a;
            mini = i;
        }
    }
    if(mini>maxi){
        cout<<n+maxi-1-mini;
    }
    else{
        cout<<n+maxi-2-mini;
    }
}
