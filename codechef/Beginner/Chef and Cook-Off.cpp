#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sum =0;
        for(int i=0;i<5;i++){
            int x;
            cin>>x;
            sum = sum + x;
        }
        if(sum==0){
            cout<<"Beginner"<<"\n";
        }
        else if(sum ==1){
            cout<<"Junior Developer"<<"\n";
        }
        else if(sum ==2){
            cout<<"Middle Developer"<<"\n";
        }
        else if(sum==3){
            cout<<"Senior Developer"<<"\n";
        }
        else if(sum ==4){
            cout<<"hacker"<<"\n";
        }
        else{
            cout<<"Jeff Dean"<<"\n";
        }
    }
}
