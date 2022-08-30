#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int d = max(a,b);
        d = max(d,c);
        if(a==d && b == d && c==d){
            cout<<1<<" "<<1<<" "<<1<<"\n";
        }
        else if(a==d && b==d && c!=d){
            cout<<1<<" "<<1<<" "<<d-c+1<<"\n";
        }
        else if(a == d && c==d && b!=d){
            cout<<1<<" "<<d-b+1<<" "<<1<<"\n";
        }
        else if(a!=d && b ==d && c==d){
            cout<<d-a+1<<" "<<1<<" "<<1<<"\n";
        }
        else{
            if(a==d){
                cout<<0<<" "<<d-b+1<<" "<<d-c+1<<"\n";
            }
            else if(b==d){
                cout<<d-a+1<<" "<<0<<" "<<d-c+1<<"\n";
            }
            else{
                cout<<d-a+1<<" "<<d-b+1<<" "<<0<<"\n";
            }
        }
    }
}
