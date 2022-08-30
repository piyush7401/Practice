#include<bits/stdc++.h>
using namespace std;
int main(){
        long long int n;
        cin>>n;
        long long int sum;
        cin>>sum;
        int s =0;
        for(long long int i=0;i<n;i++){
            char c;
            cin>>c;
            long long int x;
            cin>>x;
            if(c == '+'){
                sum = sum + x;
            }
            else{
                if(sum>=x){
                    sum = sum -x;
                }
                else{
                    s++;
                }
            }
        }
        cout<<sum<<" "<<s;
    }
