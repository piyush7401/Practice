#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int k=0;k<n;k++){
        if(arr[k][1] == arr[k+1][0]){
            sum++;
        }
    }
    cout<<sum+1;
}
