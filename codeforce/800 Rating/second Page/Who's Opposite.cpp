#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    for(int i=0;i<t;i++){
        int a = abs(p[i][0] - p[i][1]);
        if(2*a >= p[i][2] && 2*a >= p[i][1] && 2*a >= p[i][0]){
            if(p[i][2] < a + 1){
                cout<<p[i][2] + a<<"\n";
            }
            else{
                cout<<p[i][2] - a<<"\n";   
            }
        }
        else{
            cout<<-1<<"\n";
        }
    }
}
