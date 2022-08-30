#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p(t);
    for(int i=0;i<t;i++){
        cin>>p[i];
    }
    for(int i=0;i<t;i++){
        if(p[i]%10 == 0){
            cout<<"0"<<"\n";
        }
        else if(p[i]%10 ==5){
            cout<<"1"<<"\n";
        }
        else{
            cout<<"-1"<<"\n";
        }
    }
}
