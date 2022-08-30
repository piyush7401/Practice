#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        map<string,int> m;
        for(int i=0;i<8;i++){
            string s;
            cin>>s;
            m[s]++;
        }
        int sum =0;
        for(auto value: m){
            if(value.second == 2){
                sum++;
            }
        }
        if(sum>=2){
            cout<<"similar"<<"\n";
        }
        else{
            cout<<"disimilar"<<"\n";
        }
    }
}
