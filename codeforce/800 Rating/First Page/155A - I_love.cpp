#include<bits/stdc++.h>
using namespace std;
int main(){
    int max = -258;
    int min = 100000;
    int n;
    cin>>n;
    int a;
    int maxi = -1;
    int mini = -1;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>max){
            max = a;
            maxi++;
        }
        if(a<min){
            min = a;
            mini++;
        }
    }
    cout<<maxi+mini;
}
