#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int i=0;
        while(a <= c && b <= c){
            if(a<b){
                a = a+b;
            }
            else{
                b= b+a;
            }
            i++;
        }
        cout<<i<<"\n";
    }
}
