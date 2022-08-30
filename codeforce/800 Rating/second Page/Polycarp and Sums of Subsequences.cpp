#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        vector<long long int> p(7);
        for(int i=0;i<7;i++){
            cin>>p[i];
        }
        cout<<p[0]<<" "<<p[1]<<" "<<p[6]-p[1]-p[0]<<"\n";
    }
}
