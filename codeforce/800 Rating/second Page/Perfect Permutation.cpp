#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<-1;
    }
    else{
        int i=1;
        while(i<n){
            cout<<i+1<<" "<<i<<" ";
            i=i+2;
        }
    }
}
