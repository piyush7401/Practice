#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int t,y;
    if(a>b){
        t = b;
        a = a - b;
        y = a/2;
        cout<<t<<" "<<y;
    }
    else if(a<b){
        t = a;
        b = b - a;
        y = b/2;
        cout<<t<<" "<<y;
    }
    else{
        cout<<a<<" "<<0;
    }
}
