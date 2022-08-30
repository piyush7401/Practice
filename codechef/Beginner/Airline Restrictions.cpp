#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> p(3);
        for(int i=0;i<3;i++){
            cin>>p[i];
        }
        int d,e;
        cin>>d>>e;
        sort(p.begin(),p.end());
        if(p[2] <= e){
            if(p[0] + p[1] <= d){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else if(p[2] > e && p[1] <= e){
            if(p[0] + p[2] <= d){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else if(p[2] > e && p[1] > e && p[0] <= e){
            if(p[2] + p[1] <= d){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }
        
    }
}
