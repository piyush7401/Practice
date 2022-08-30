#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        if(p[i]%4 == 2){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
