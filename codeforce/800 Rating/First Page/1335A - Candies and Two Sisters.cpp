#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            arr[i] = arr[i]/2 -1;
        }
        else{
            arr[i] = arr[i]/2;
        }
    }
    int j=0;
    while(j<n){
        cout<<arr[j]<<"\n";
        j++;
    }
}
