#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>v[i];
        maxi = max(maxi,v[i]);
    }
    vector<int> freq(maxi+1);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    for(int i=0;i<freq.size();i++){
        if(freq[i] != 0){
            cout<<i<<" "<<freq[i]<<"\n";
        }
    }
    
}
