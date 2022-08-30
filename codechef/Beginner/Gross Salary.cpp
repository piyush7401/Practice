#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<float> p(t);
    for(int i=0;i<t;i++){
        cin>>p[i];
    }
    for(int i=0;i<t;i++){
        if(p[i]<1500){
            cout<<p[i]*2<<"\n"; 
        }
        else{
            cout<<(p[i]*99/50) + 500<<"\n";
        }
    }
}
