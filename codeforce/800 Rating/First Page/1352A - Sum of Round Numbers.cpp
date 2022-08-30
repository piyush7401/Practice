#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int count =0;
        int m=1;
        int arr[6];
        for(int i=1;i<6;i++)
        {
            arr[i] = t%10;
            t = t/10;
            if(arr[i] != 0){
                count++;
            }
        }
        cout<<count<<"\n";
        for(int i=1;i<6;i++){
            if(arr[i]!=0){
            cout<<arr[i]*m<<" ";
            
        }
        m= m*10;
    }
}
}
