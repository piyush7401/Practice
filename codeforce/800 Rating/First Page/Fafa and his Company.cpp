#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    for(int i=1;i<=n/2;i++){
        if((n-i)%i == 0){
            sum++;
        }
    }
    cout<<sum;
}
