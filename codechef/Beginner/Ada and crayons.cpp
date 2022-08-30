#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<string> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=0;j<p[i].size() - 1;j++){
                if(p[i][j] != p[i][j+1]){
                    sum++;
                }
            }
            cout<<(sum+1)/2<<"\n";
        }
}
