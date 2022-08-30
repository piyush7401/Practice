#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<float> p[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        float t1,t2;
        t1 = p[i][0]*pow(2,0.5)/p[i][1];
        t2 = 2*p[i][0]/p[i][2];
        if(t1<t2){
            cout<<"Stairs"<<"\n";
        }
        else{
            cout<<"Elevator"<<"\n";
        }
    }
}
