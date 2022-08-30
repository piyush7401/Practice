#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> p;
    cin>>p.first>>p.second;
    if(n <= min(p.first,p.second)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
