#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum;
    cin>>sum;
    if(sum !=1){
        int i=0;
    while((i*(i+1)*(i+2)/6) <= sum && sum!=1){
        i++;
    }
    
    cout<<i-1;
    
    }
    else{
        cout<<1;
    }
    
}
