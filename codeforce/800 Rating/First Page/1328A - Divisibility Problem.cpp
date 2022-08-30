#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        int a;
        int b;
        cin>>a>>b;
        if(a%b!=0){
        arr[i] = b - a%b;
        }
        else{
            arr[i] = 0;
        }
    }
    for(int j=0;j<t;j++){
        cout<<arr[j]<<"\n";
    }
}
