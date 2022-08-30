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
    int sum =0;
    for(int k=0;k<n;k++){
        for(int m=0;m<n;m++){
            if(arr[k][0]==arr[m][1]){
                sum++;
            }
        }
    }
    cout<<sum;
}
