#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    for(int i=0;i<t;i++){
        if(v[i]%2==1){
            cout<<(v[i]/2)+1<<"\n";
        }
        else{
            cout<<v[i]/2<<"\n";
        }
    }
}
