#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int sum = accumulate(p.begin(), p.end(), 0);
    int sum2 =0;
    int m =0;
    for(int i=n-1;i>=0;i--){
        if(sum2 <= sum - sum2){
            sum2 = sum2 + p[i];
            m = i;
        }
        else{
            break;
        }
    }
    cout<<n-m<<"\n";
}
