#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p(t);
    for(int i=0;i<t;i++){
        cin>>p[i];
    }
    for(int i =0;i<t;i++){
        if(p[i]%3==0){
            cout<<p[i]/3<<" "<<p[i]/3<<"\n";
        }
        else if(p[i]%3==1){
            cout<<(p[i]/3)+1<<" "<<p[i]/3<<"\n";
        }
        else{
            cout<<p[i]/3<<" "<<(p[i]/3)+1<<"\n";
        }
    }
}
