#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<float> p[1];
    vector<string> p1(1);
    for(int i=0;i<1;i++){
        for(int j=0;j<2;j++){
            float x;
            cin>>x;
            p[i].push_back(x);
        }
        cin>>p1[i];
    }
    for(int i=0;i<1;i++){
        if(p1[i] == "/"){
            cout<<p[i][0]/p[i][1]<<"\n";
        }
        else if(p1[i] == "*"){
            cout<<p[i][0]*p[i][1]<<"\n";
        }
        else if(p1[i] == "-"){
            cout<<p[i][0] - p[i][1]<<"\n";
        }
        else{
            cout<<p[i][0] + p[i][1]<<"\n";
        }
    }
}
