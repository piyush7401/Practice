#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    int i=0;
    while(i<3){
        cin>>arr[i];
        i++;
    }
    sort(arr,arr+3);
    cout<<arr[2]-arr[0];
}
