#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=1;i<n+1;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    map<int,int> :: iterator it;
    for(it=m.begin();it != m.end();it++){
        if((*it).second == 2){
            cout<<(*it).first<<"\n";
        }
    }
}
