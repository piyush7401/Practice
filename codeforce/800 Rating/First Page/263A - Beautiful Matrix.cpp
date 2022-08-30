#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int c=0;
    int d=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                c = i;
                d = j;
            }
        }
    }
    int sum = abs(c-2) + abs(d-2);
    cout<<sum;
}
