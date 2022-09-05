#include<bits/stdc++.h>
using namespace std;

int fun(int index,vector<int> &v,vector<int> &arr,int n,int sum,int k){
    if(index >= n && sum == k){
        return 1;
    }
    else if(index >= n && sum != k){
        return 0;
    }
    
    arr.push_back(v[index]);
    sum = sum + v[index];
    int l = fun(index+1,v,arr,n,sum,k);
    arr.pop_back();
    sum = sum - v[index];
    int r = fun(index+1,v,arr,n,sum,k);
    return l+r;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> arr;
    int k;
    cin>>k;
    cout<<fun(0,v,arr,n,0,k);
}