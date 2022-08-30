#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<pair<int,int> >p(t);
    for(int i=0;i<t;i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<p[i].first;j++){
            p[i].second = p[i].second*(p[i].second +1)/2;
        }
        cout<<p[i].second<<"\n";
    }
}
