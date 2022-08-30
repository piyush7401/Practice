#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sum =0;
        long long int n;
        int flag =0;
        cin>>n;
        while(n>1){
            if(n%2==0){
                n= n/2;
            }
            else if(n%3 ==0){
                n = (2*n)/3;
            }
            else if(n%5 ==0){
                n = (4*n)/5;
            }
            else{
                cout<<-1<<"\n";
                flag =1;
                break;
            }
            sum++;
        }
        if(flag ==0){
            cout<<sum<<"\n";
        }
    }
}
