#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        vector<int> p(n);
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>p[i];
            sum =sum + p[i];
        }
        if(sum%2==0){
            if(k%4==1 || k%4==2){
                cout<<"odd"<<"\n";
            }
            else{
                cout<<"even"<<"\n";
            }
        }
        else {
            if(k==1){
                cout<<"odd"<<"\n";
            }
            else{
                if((k-1)%4 == 1 || (k-1)%4 == 2){
                    cout<<"even"<<"\n";
                }
                else{
                    cout<<"odd"<<"\n";
                }
            }
        }
    }
}
