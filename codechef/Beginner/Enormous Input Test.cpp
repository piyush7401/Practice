#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    long int k;
    cin>>n>>k;
    int sum =0;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%k==0){
            sum++;
        }
    }
    cout<<sum;
}
