#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count =0;
    int i=0;
    while(i+3<=n){
        if(((5-arr[i])>=k)&&((5-arr[i+1])>=k)&&((5-arr[i+2])>=k)){
            count++;
        }
        else{
            break;
        }
        i+3;
    }
    cout<<count;
}
