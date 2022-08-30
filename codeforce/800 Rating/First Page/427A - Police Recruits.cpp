#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum =0;
    int count =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            sum = sum + arr[i];
        }
        else if(arr[i]<0){
            if(sum==0){
                sum =0;
                count++;
            }
            else{
            sum = sum -1;
            }
        }
    }
    cout<<count;
    
}
