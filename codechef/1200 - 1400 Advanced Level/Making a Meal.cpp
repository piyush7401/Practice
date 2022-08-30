#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        map<char,int> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<p[i].size();j++){
                m[p[i][j]]++;
            }
        }
        int min = 1e5+1;
        for(auto value : m){
            if((min > value.second) && (value.first == 'c' || value.first == 'o' || value.first == 'd' || value.first == 'e' || value.first == 'h' || value.first == 'f')){
                min = value.second;
            }
        }
        cout<<min<<"\n";
    }
}
