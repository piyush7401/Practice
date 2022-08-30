#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> p1(n);
        vector<long long int> p2(n);
        for(long long int i=0;i<n;i++){
            cin>>p1[i];
        }
        for(long long int i=0;i<n;i++){
            cin>>p2[i];
        }
        long long int a = *min_element(p1.begin(),p1.end());
        long long int b = *min_element(p2.begin(),p2.end());
        long long int sum =0;
        for(int i=0;i<n;i++){
            sum = sum + max(p1[i]-a,p2[i]-b);
        }
        cout<<sum<<"\n";
    }
}
