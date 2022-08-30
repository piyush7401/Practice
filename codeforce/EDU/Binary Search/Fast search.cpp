#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        int sum =0;
        for(int j=0;j<p.size();j++){
            if(p[j] >= x && p[j] <= y){
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
}
