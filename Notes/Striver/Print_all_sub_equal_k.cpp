#include<bits/stdc++.h>
using namespace std;

void fun(int index,vector<int> &v,vector<int> &arr,int n,int sum,int k){
    if(index >= n && sum == k){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else if(index >= n && sum != k){
        return;
    }
    arr.push_back(v[index]);
    sum = sum + v[index];
    fun(index+1,v,arr,n,sum,k);
    arr.pop_back();
    sum = sum - v[index];
    fun(index+1,v,arr,n,sum,k);
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
    fun(0,v,arr,n,0,k);
}