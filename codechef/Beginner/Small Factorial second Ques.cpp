#include<bits/stdc++.h>
using namespace std;

long long int fact(int i){
    if(i==0){
        return 1;
    }
    else{
        return fact(i-1)*i;
    }
}

int main(){
    int t;
    cin>>t;
    vector<long long int>v(21);
    for(int i=0;i<21;i++){
        v[i] = fact(i);
    }
    while(t--){
        int x;
        cin>>x;
        cout<<v[x];
    }
}
