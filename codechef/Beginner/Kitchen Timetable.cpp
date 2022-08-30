#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    vector<int> p1[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
        for(int j=0;j<n;j++){
            int y;
            cin>>y;
            p1[i].push_back(y);
        }
    }
    for(int i=0;i<t;i++){
        int sum =0;
        if(p1[i][1] - p1[i][0] > p[i][0]){
            sum++;
        }
        for(int j=1;j<p[i].size();j++){
            if(p[i][j] - p[i][j-1] > p1[i][j]){
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
}
