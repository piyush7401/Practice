#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>a;
        arr[a] = i; 
    }
    for(int j=1;j<n+1;j++){
        cout<<arr[j]<<" ";
    }
}
