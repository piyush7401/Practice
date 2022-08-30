#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<long long int> p[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            long long int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        sort(p[i].begin(),p[i].end());
        long long int min = 1e7;
        for(int j=0;j<p[i].size()-1;j++){
            if(min > p[i][j+1] - p[i][j]){
                min = p[i][j+1] - p[i][j];
            } 
        }
        cout<<min<<"\n";
    }
}
