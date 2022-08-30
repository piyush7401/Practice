#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p1[t];
    vector<int> p2[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            p1[i].push_back(x);
        }
        for(int k=0;k<n;k++){
            int y;
            cin>>y;
            p2[i].push_back(y);
        }
    }
    for(int i=0;i<t;i++){
        int max =0;
        int r =0;
        int k;
        for(int j=0;j<p1[i].size();j++){
            if((max <= p1[i][j]*p2[i][j]) && (r < p2[i][j])){
                max = p1[i][j]*p2[i][j];
                r = p2[i][j];
                k =  j;
            }
        }
        cout<<k+1<<"\n";
    }
}
