#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>p[i];
            if(p[i] == 0){
                sum++;
            }
        }
        int a = accumulate(p.begin(),p.end(),0);
        a = a + sum;
        if(a == 0){
            cout<<sum +1<<"\n";
        }
        else{
            cout<<sum<<"\n";
        }
    }
}
