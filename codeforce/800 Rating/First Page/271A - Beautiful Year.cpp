#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;
    int ans,a,b,c,d;
    while(1){
        year++;
        ans = year;
        a = year%10;
        year = year/10;
        b = year%10;
        year = year/10;
        c = year%10;
        year = year/10;
        d = year%10;
        if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d){
            cout<<ans;
            break;
        }
    }
        year = ans;
    
}
