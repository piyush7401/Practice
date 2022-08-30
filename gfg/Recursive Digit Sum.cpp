#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return sum(n/10) + n%10; 
}


int main(){
    int n;
    int k;
    cin>>n>>k;
    int s = sum(n);
    s = s*k;
    while(s>=10){
        s = sum(s);
    }
    cout<<s;
}
