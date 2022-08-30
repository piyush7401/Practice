#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int max = 0;
        int min = 1e3;
        int r = 0;
        int l = 0;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            if(max<x){
                max = x;
                l = j;
            }
            if(min>x){
                min = x;
                r = j;
            }
        }
    v[i].push_back(max);
    v[i].push_back(min);
    v[i].push_back(l);
    v[i].push_back(r);
    }
    for(int i=0;i<t;i++)
    {
        if(v[i][2] < v[i][3]){
        cout<<v[i][0]<<" "<<v[i][1]<<"\n";
        }
        else{
            cout<<v[i][1]<<" "<<v[i][0]<<"\n";
        }
    }
}
