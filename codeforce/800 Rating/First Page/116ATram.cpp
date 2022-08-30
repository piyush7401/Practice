#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    int sum =0;
    for(int k=0;k<n-1;k++){
        if(sum < a[k][1] - a[k+1][0] +  a[k+1][1]){
        sum = a[k][1] - a[k+1][0] +  a[k+1][1] ; 
        }
    }
    cout<<sum;
}
