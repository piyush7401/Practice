#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<float> p[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<5;j++){
            float x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        float a = (p[i][2] - p[i][0])/p[i][3];
        float b = (p[i][1] - p[i][2])/p[i][4];
        if(a<b){
            cout<<"Chef"<<"\n";
        }
        else if(b<a){
            cout<<"Kefa"<<"\n";
        }
        else{
            cout<<"Draw"<<"\n";
        }
    }
    
}
