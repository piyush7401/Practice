#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a = max(a,b);
    int d = __gcd(7-a,6);
    cout<<(7-a)/d<<"/"<<(6/d);
}
