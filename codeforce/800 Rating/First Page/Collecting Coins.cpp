#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p1[t];
    vector <int> p2(t);
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            p1[i].push_back(x);
        }
        cin>>p2[i];
    }
    for(int i=0;i<t;i++){
        sort(p1[i].begin(),p1[i].end());
        int a = 2*p1[i][2] - p1[i][0] - p1[i][1];
        if((p2[i] - a)%3 == 0 && (p2[i] - a) >= 0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
