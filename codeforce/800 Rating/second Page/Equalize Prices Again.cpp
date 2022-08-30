#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<float> p(n);
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>p[i];
            sum = sum +p[i];
        }
        if(sum%n==0){
            cout<<sum/n<<"\n";
        }
        else{
            cout<<(sum/n)+1<<"\n";
        }
    }
}