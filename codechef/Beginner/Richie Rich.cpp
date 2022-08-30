#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        int a = p[i][1] - p[i][0];
        if(a%p[i][2] == 0){
            cout<<a/p[i][2]<<"\n";
        }
        else{
            cout<<(a/p[i][2]) + 1<<"\n";
        }
    }
}
