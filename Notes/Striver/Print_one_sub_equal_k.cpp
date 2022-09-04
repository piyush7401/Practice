#include<bits/stdc++.h>
using namespace std;

void fun(int index,vector<int> &v,vector<int> &arr,int n,int sum,int k,bool &flag){
    if(index >= n && sum == k && flag == false){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        flag = true;
        return;
    }
    else if(index >= n && sum != k){
        return;
    }
    if(flag == false){
        arr.push_back(v[index]);
        sum = sum + v[index];
        fun(index+1,v,arr,n,sum,k,flag);
        arr.pop_back();
        sum = sum - v[index];
        fun(index+1,v,arr,n,sum,k,flag);
    }
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
    bool flag = false;
    fun(0,v,arr,n,0,k,flag);
}