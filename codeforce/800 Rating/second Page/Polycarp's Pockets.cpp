#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <int,int> m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    int max =0;
    for(auto value: m){
        if(max < value.second){
            max = value.second;
        }
    }
    cout<<max;
}
