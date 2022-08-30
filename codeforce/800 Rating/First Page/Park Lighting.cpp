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
        int sum =0;
        sum = p[i].first*p[i].second;
        if(sum%2==1){
           cout<<(sum/2)+1<<"\n";
        }
        else{
            cout<<sum/2<<"\n";
        }
       
    }
}
