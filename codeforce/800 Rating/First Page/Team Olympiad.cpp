#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    int arr1[n];
    int arr2[n];
    int arr3[n];
    int s1=0;
    int s2 =0;
    int s3 =0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            arr1[s1] = i;
            s1++;
        }
        else if(arr[i]==2){
            arr2[s2] = i;
            s2++;
        }
        else{
            arr3[s3] = i;
            s3++;
        }
    }
    int s = min(s1,s2);
    s = min(s,s3);
    cout<<s<<"\n";
    int j=0;
    while(s){
        cout<<arr1[j]<<" "<<arr2[j]<<" "<<arr3[j]<<"\n";
        j++;
        s--;
    }
}
