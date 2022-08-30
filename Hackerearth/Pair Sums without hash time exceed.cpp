#include<bits/stdc++.h>
using namespace std;


void check(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==k-arr[i]){
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
    return;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    check(arr,n,k);
}
