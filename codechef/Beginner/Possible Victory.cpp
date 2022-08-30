#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> p(3);
    for(int i=0;i<3;i++){
        cin>>p[i];
    }
    if(p[0] - p[2] < (20-p[1])*6){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
