#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        int arr[no];
        int repeat = 0;
        for(int i=0;i<no;i++){
            cin>>arr[i];
            if(arr[i]%2==1)
            {
                repeat++;
            }
        }
        if(repeat%2==1){
            repeat=repeat-1;
        }
        cout<<repeat/2,"/n";
    }
}