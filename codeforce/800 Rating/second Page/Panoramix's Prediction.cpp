#include<bits/stdc++.h>
using namespace std;

int check(int n){
    int i =2;
    while(i<=n/2){
        if(n%i!=0){
            i++;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int flag =0;
    for(int i=1;i<=b-a;i++){
        if(check(a+i)==1 && i < b-a){
            cout<<"NO"<<"\n";
            flag = 1;
            break;
        }
        else if(check(a+i)==1 && i == b-a){
            cout<<"YES"<<"\n";
            flag =1;
            break;
        }
    }
    if(flag == 0){
        cout<<"NO"<<"\n";
    }
}
