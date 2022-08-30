#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> p(4);
    for(int i=0;i<4;i++){
        cin>>p[i];
    }
    int a= min(p[2],p[3]);
    int sum =0;
    if(p[0] >= a){
        sum = sum + 256*a;
        p[0] = p[0] - a;
        int b = min(p[0],p[1]);
        sum = sum + 32*b;
    }
    else{
        sum = sum + p[0]*256;
    }
    cout<<sum<<"\n";
}