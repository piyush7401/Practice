#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float k;
    cin>>n>>k;
    if(n%5==0 && n - 0.5 =< k){
        k = k - n - 0.5;
    }
    cout<<k;
}
