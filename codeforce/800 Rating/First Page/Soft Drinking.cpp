#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> p(8);
    for(int i=0;i<8;i++){
        cin>>p[i];
    }
    p[2] = p[2]*p[1];
    p[2] = p[2]/p[6];
    p[4] = p[4]*p[3];
    p[5] = p[5]/p[7];
    p[2] = min(p[2],p[4]);
    p[2] = min(p[2],p[5]);
    cout<<p[2]/p[0];
}
