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
        if(p[i].first >= 2){
            if(p[i].first == 2){
                cout<<1<<"\n";
            }
            else{
                if((p[i].first - 2)%p[i].second == 0){
                    cout<<1+((p[i].first - 2)/p[i].second)<<"\n";
                }
                else{
                    cout<<2+((p[i].first - 2)/p[i].second)<<"\n";
                }
            }
        }
        else{
            cout<<1<<"\n";
        }
    }
}
