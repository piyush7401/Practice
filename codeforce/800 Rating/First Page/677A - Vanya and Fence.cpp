#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    int sum =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=k){
            sum++;
        }
        else{
            sum =sum +2;
        }
    }
    cout<<sum;
}
