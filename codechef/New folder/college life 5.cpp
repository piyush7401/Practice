#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> foot(n);
        vector<int> cric(m);
        for(int i=0;i<n;i++){
            cin>>foot[i];
        }
        for(int i=0;i<m;i++){
            cin>>cric[i];
        }
        sort(foot.begin(),foot.end());
        sort(cric.begin(),cric.end());
        vector<int> final;
        int i=0;
        int j=0;
        int k =0;
        while(i<n && j<m){
            if(foot[i] < cric[j]){
                final.push_back(1);
                j++;
            }
            else{
                final.push_back(2);
                i++;
            }
        }
        while(i<n){
            final.push_back(2);
            i++;
        }
        while(j<m){
            final.push_back(1);
            j++;
        }
        int sum = 2;
        int a =0;
        for(int i=0;i<final.size()-1;i++){
            if(sum != final[i]){
                a++;
                sum = final[i];
            }
        }
        cout<<a<<"\n";
    }
}
