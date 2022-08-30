#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    k = 240 - k;
    int i=0;
    while(i*(i+1)*5<=2*k && i<=n){
        i++;
    }
    cout<<i-1;
}
