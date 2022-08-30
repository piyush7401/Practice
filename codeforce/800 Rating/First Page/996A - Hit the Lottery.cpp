#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(n>0){
        if(n>=100){
            i++;
            n = n -100; 
            
        }
        else if(n>=20){
            i++;
            n = n - 20;

        }
        else if(n>=10){
            i++;
            n = n - 10;
            
        }
        else if(n>=5){
            i++;
            n = n - 5;
            
        }
        else{
            i = i + n;
            n = 0;
           
        }
    }
    cout<<i;
}
