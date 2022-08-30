#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> p(t);
    for(int i=0;i<t;i++){
        cin>>p[i];
    }
    for(int i=0;i<t;i++){
        int arr[26] ={0};
        for(int j=0;j<p[i].size();j++){
            arr[p[i][j] - 97]++;
        }
        sort(arr,arr+26);
        if(arr[25] == p[i].size()/2 && p[i].size()%2==0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
