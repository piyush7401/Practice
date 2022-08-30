#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long int> s; 
        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            s.insert(x);
        }
        multiset<long long int> :: iterator it;
        long long int sum =0;
        for(int i=0;i<k;i++){
            it = (--s.end());
            sum = sum + (*it);
            long long int w = (*it);
            s.erase(it);
            s.insert(w/2);
        }
        cout<<sum<<"\n";
    }
}
