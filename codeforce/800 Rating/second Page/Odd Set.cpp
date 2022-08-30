#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<2*n;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        int sum1 = 0;
        int sum2 = 0;
        for(int j=0;j<p[i].size();j++){
            if(p[i][j]%2 == 0){
                sum2++;
            }
            else{
                sum1++;
            }
        }
        if(sum1 == sum2){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
}
