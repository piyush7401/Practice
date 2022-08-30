#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a*b > 2*(a+b)){
        cout<<"Area"<<" "<<a*b;
    }
    else if(a*b < 2*(a+b)){
        cout<<"Peri"<<"\n"<<2*(a+b);
    }
    else{
        cout<<"Eq"<<"\n"<<a*b;
    }
}
