#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> boy(n);
        vector<long long int> girl(n);
        for(int i=0;i<n;i++){
            cin>>boy[i];
        }
        for(int i=0;i<n;i++){
            cin>>girl[i];
        }
        sort(boy.begin(),boy.end());
        reverse(girl.begin(),girl.end());
        long long int max =-1;
        for(int i=0;i<n;i++){
            if(max < boy[i] + girl[i]){
                max = boy[i] + girl[i];
            }
        }
        cout<<max<<"\n";
    }
}
