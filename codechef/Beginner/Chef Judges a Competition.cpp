#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        vector<int> q(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            cin>>q[i];
        }
        int sum = accumulate(p.begin(),p.end(),0);
        int max = *max_element(p.begin(),p.end());
        sum = sum - max;
        int sum1 = accumulate(q.begin(),q.end(),0);
        int max1 = *max_element(q.begin(),q.end());
        sum1 = sum1 - max1;
        if(sum < sum1){
            cout<<"Alice"<<"\n";
        }
        else if(sum > sum1){
            cout<<"Bob"<<"\n";
        }
        else{
            cout<<"Draw"<<"\n";
        }
    }
}
