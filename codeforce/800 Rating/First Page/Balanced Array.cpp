#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a%4!=0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            int sume = (a)*(a + 2)/4;
            int sumo = (a-2)*(a-2)/4;
            int last = sume - sumo;
            int i=0;
            while(i<a){
                i = i+2;
                cout<<i<<" ";
            }
            int j=1;
            int k=0;
            while(k<(a/2)-1){
                cout<<j<<" ";
                j = j+2;
                k++;
            }
            cout<<last<<"\n";
        }
    }
}
