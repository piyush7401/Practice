#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<pair<int,int> > p(t);
    for(int i=0;i<t;i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<t;i++){
        int a = __gcd(p[i].first,p[i].second);
        cout<<(p[i].first*p[i].second)/(a*a)<<"\n";
    }
}
