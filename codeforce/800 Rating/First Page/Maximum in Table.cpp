#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int j=0;j<n;j++){
        a[0][j] = 1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                a[i][j] = 1;
            }
            else{
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
    }
    cout<<a[n-1][n-1];
}
