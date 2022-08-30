#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> p(2);
    for(int i=0;i<2;i++){
        cin>>p[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
        if(abs(p[0][i] - p[1][i]) > 5){
            sum = sum + (10 - abs(p[0][i] - p[1][i]));
        }
        else{
            sum = sum + abs(p[0][i] - p[1][i]);
        }
    }
    cout<<sum;
}

