#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> p(t);
    vector<string> p1(t);
    for(int i=0;i<t;i++){
        cin>>p[i];
        cin>>p1[i];
    }
    for(int i=0;i<t;i++){
        int sum =0;
        int sum1 =0;
        for(int j=0;j<p[i].size();j++){
            if(p[i][j] != p1[i][j] && p[i][j] != '?' && p1[i][j] != '?'){
                sum++;
            }
            else if(p[i][j] == '?' || p1[i][j] == '?'){
                sum1++;
            }
        }
        cout<<sum<<" "<<sum1 + sum<<"\n";
    }
}
