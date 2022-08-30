#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    vector<long long int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    long long int sum =0;
    for(long long int i=0;i<n/2;i++){
        sum = sum + pow(p[i] + p[n-i-1],2);
    }
    cout<<sum<<" \n";
}
