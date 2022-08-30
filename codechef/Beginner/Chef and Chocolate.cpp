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
        if((p[i].first*p[i].second -1)%2==0){
            cout<<"No"<<"\n";
        }
        else{
            cout<<"Yes"<<"\n";
        }
    }
}
