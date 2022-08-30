#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int a = k;
    int i=0;
    while(k%10 != r && k%10 != 0){
        k = k + a;
        i++;
    }
    cout<<i+1;
}
