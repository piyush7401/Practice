#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j] && arr[i]!=-1){
                arr[j] = -1;
                sum++;
            }
        }
    }
    cout<<sum;
}
