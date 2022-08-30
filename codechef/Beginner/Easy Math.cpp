#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        vector<int> q;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int x;
                x = p[i]*p[j];
                q.push_back(x);
            }
        }
        for(int i=0;i<q.size();i++){
            int sum = 0;
            while(q[i]>0){
                int a = q[i]%10;
                sum = sum + a;
                q[i] = q[i]/10;
            }
            q[i] = sum;
        }
        sort(q.begin(),q.end());
        cout<<q[q.size() - 1]<<"\n";
    }
    
}
