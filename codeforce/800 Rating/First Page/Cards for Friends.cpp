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
        int a = p[i][0]*p[i][1];
        int sum =0;
        while(a%2==0){
            a = a/2;
            sum++;
        }
        if(pow(2,sum)>=p[i][2]){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
