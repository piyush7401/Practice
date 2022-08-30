#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+1;

void check(int arr[],int k){
    for(int i=1;i<k;i++){
        if(arr[i]==1 && arr[k-i]==1){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
    return;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[N];
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr[a]++;
    }
    check(arr,k);
}
