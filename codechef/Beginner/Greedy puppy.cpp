#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<pair<int,int>>p(t);
    for(int i=0;i<t;i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<t;i++){
        int max = 0;
        for(int j =1;j <= p[i].second;j++){
            if(max < p[i].first%j){
                max = p[i].first%j;
            }
        }
        cout<<max<<"\n";
    }
}
