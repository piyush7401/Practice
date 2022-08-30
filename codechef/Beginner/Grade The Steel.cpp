#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<float>p[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            float x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        if(p[i][0]>50 && p[i][1]<0.7 && p[i][2]>5600){
            cout<<10<<"\n";
        }
        else if(p[i][0]>50 && p[i][1]<0.7 && p[i][2]<5600){
            cout<<9<<"\n";
        }
        else if(p[i][0]<50 && p[i][1]<0.7 && p[i][2]>5600){
            cout<<8<<"\n";
        }
        else if(p[i][0]>50 && p[i][1]>0.7 && p[i][2]>5600){
            cout<<7<<"\n";
        }
        else if(p[i][0]>50 && p[i][1]>0.7 && p[i][2]<5600){
            cout<<6<<"\n";
        }
        else if(p[i][0]<50 && p[i][1]<0.7 && p[i][2]<5600){
            cout<<6<<"\n";
        }
        else if(p[i][0]<50 && p[i][1]>0.7 && p[i][2]>5600){
            cout<<6<<"\n";
        }
        else{
            cout<<5<<"\n";
        }
    }
}
