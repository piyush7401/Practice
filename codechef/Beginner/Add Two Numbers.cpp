#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        arr[i][0] = arr[i][0]+arr[i][1];
        cout<<arr[i][0]<<"\n";
    }
}
