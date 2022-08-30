#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count0=0;
        int count1 =0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        int count3=0;
        if(n%2==1){
            if(count0-count1==1){
                for(int i=0;i<n;i++){
                    if(arr[i]%2==0 && i%2==1){
                        count3++;
                    }
                }
                cout<<count3<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
        }
        else{
            if(count1-count0==0){
                for(int i=0;i<n;i++){
                    if(arr[i]%2==0 && i%2==1){
                        count3++;
                    }
                }
                cout<<count3<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
        }
    }
}
