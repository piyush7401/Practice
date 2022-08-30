#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    long long int max =0;
    for(int i=0;i<n;i++){
        if(max < p[i]*(n-i)){
            max = p[i]*(n-i);
        }
    }
    cout<<max;
}
