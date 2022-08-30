#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> p[2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            p[i].push_back(x);
        }
    }
    int sum =0;
    for(int i=0;i<p[0].size();i++){
        sum = sum + p[0][i];
    }
    int a = sum;
    sum =0;
    for(int i =0;i<p[1].size();i++){
        sum = sum + p[1][i];
    }
    int b;
    cin>>b;
    if(a%5==0 && sum%10 == 0){
        if(a/5 + sum/10 <= b){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    else if(a%5==0 && sum%10 != 0){
        if(a/5 + sum/10 + 1 <= b){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    else if(a%5 != 0 && sum%10 == 0){
        if(a/5 + sum/10 + 1 <= b){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    else{
        if(a/5 + sum/10 + 2 <= b){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
