#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int sum =0;
    for(int i=0;i<n;i= i+2){
        sum = sum + (p[i+1] - p[i]);
    }
    cout<<sum<<"\n";
}
