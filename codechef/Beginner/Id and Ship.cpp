#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> p(t);
    for(int i=0;i<t;i++){
        cin>>p[i];
        if(p[i][0] == 'B' || p[i][0] == 'b'){
            cout<<"BattleShip"<<"\n";
        }
        else if(p[i][0] == 'C' || p[i][0] == 'c'){
            cout<<"Cruiser"<<"\n";
        }
        else if(p[i][0] == 'D' || p[i][0] == 'd'){
            cout<<"Destroyer"<<"\n";
        }
    }
    
}
