#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int a = n%x;
        if(a==y){
            cout<<n<<"\n";
        }
        else if(a>y){
            cout<<(n-(a-y))<<"\n";
        }
        else{
            cout<<(n-a-(x-y))<<"\n";
        }
    }
}
