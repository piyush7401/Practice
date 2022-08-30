#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<pair<float,float> > p(t);
    for(int i=0;i<t;i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<t;i++){
        if(p[i].first > 1000){
            cout<<9*p[i].first*p[i].second/10<<"\n";
        }
        else{
            cout<<p[i].first*p[i].second<<"\n";
        }
    }
}
