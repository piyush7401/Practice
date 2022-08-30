#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a == 0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    }
    else{
        return gcd(a,b-a);
    }
}
int main(){
    int t;
    cin>>t;
    vector<pair<int,int> > p(t);
    for(int i=0;i<t;i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<t;i++){
        cout<<gcd(p[i].first,p[i].second)<<" ";
        cout<<p[i].first*p[i].second/gcd(p[i].first,p[i].second)<<"\n";
    }
}
