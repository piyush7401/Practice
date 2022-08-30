#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++)
    {
        while(arr[i]%10 != arr[i])
        {
            arr[i] = arr[i]/10 ;
        }
    }
    for(int i = n/2;i<n; i++)
    {
        arr[i] = arr[i]%10;
    }
    int s=0;
    for(int i=0;i<n;i+2){
        s = s + arr[i];
    }
    int p=0;
    for(int i=1;i<n;i+2){
        p = p + arr[i];
    }
    if((s-p)%11 == 0){
        cout<<"OUI";

    }
    else{
        cout<<"NON";
    }
}