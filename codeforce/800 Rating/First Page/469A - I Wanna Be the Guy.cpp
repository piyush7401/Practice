#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1] = {0};
    int k,l;
    int a;
    cin>>k;
    int sum =0;
    for(int i=1;i<=k;i++){
        cin>>a;
        arr[a] = 1;
    }
    cin>>l;
    for(int j=1;j<=l;j++){
        cin>>a;
        arr[a] = 1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==1){
        sum++;
        }
    }
    if(sum==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    
}
