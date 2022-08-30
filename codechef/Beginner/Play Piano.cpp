#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        int j=0;
        int flag =0;
        while(j<p[i].size()){
            if(p[i][j] == p[i][j+1]){
                cout<<"no"<<"\n";
                flag =1;
                break;
            }
            j= j+2;
        }
        if(flag ==0){
            cout<<"yes"<<"\n";
        }
    }
}
