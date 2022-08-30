#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,k,p,q;
    for(i=0;n>=5;i++){
        n = n - 5;
    }
    for(p=0;n>=4;p++){
        n = n - 4;
    }
    for(q =0;n>=3;q++){
        n = n - 3;
    }
    for(j=0;n>=2;j++){
        n = n - 2;
    }
    for(k =0;n>=1;k++){
        n = n -1;
    }
    int sum = i+p+q+j+k;
    cout<<sum;

