#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    int even = 0;
    int odd = 0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        if(p[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even>odd){
        cout<<"READY FOR BATTLE";
    }
    else{
        cout<<"NOT READY";
    }
    
}
