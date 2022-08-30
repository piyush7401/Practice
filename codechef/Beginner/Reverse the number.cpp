#include<bits/stdc++.h>
using namespace std;

void reverse(string v){
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    vector<string>v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    for(int i=0;i<t;i++){
       reverse(v[i]);
    }

}
