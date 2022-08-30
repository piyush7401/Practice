#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<51){
        cout<<100;
    }
    else if(n<101){
        cout<<50;
    }
    else{
        cout<<0;
    }
}
