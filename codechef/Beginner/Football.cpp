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
        for(int j=0;j<n;j++){
            int y;
            cin>>y;
            p2[i].push_back(y);
        }
    }
    for(int i=0;i<t;i++){
        int max =0;
        for(int j=0;j<p1[i].size();j++){
            if(2*p1[i][j] - p2[i][j] != 0){
                if(max < 2*p1[i][j] - p2[i][j]){
                    max = 2*p1[i][j] - p2[i][j];
                }
            }
        }
        cout<<max*10<<"\n";
    }
    
}
