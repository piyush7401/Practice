#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c1=0;
    int m1=0;
    while(n--){
        int m,c;
        cin>>m>>c;
        if(m>c){
            m1++;
        }
        else if(m<c){
            c1++;
        }
    }
    if(c1==m1){
        cout<<"Friendship is magic!^^";
    }
    else if(c1>m1){
        cout<<"Chris";
    }
    else{
        cout<<"Mishka";
    }
}
