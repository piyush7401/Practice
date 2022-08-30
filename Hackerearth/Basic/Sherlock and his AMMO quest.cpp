#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a ,pair<string,int> b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    else{
        return a.first < b.first;
    }
}
int main(){
   int n;
    cin>>n;
    vector<pair<string,int>> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end(),cmp);
    for(auto value : p){
        cout<<value.first<<" "<<value.second<<"\n";
    }
}
