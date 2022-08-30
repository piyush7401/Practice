#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int sum =0;
    for(int i=0;i<n/2;i++){
        sum = sum*10 + (p[i][0] - 48);
    }
    for(int i = n/2;i<n;i++){
        sum = sum*10 + (p[i][p[i].size() - 1] - 48);
    }
    if(sum%11 == 0){
        cout<<"OUI";
    }
    else{
        cout<<"NO";
    }
}
