#include<bits/stdc++.h>
using namespace std;

void fun(int index,vector<int> &v,vector<int> &arr,int n){
    if(index >= n){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    arr.push_back(v[index]);
    fun(index+1,v,arr,n);
    arr.pop_back();
    fun(index+1,v,arr,n);
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> arr;
    fun(0,v,arr,n);
}