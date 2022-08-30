#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int flag =0;
        if(p.size() == 1){
            cout<<0<<"\n";
            flag =1;
        }
        if(flag ==0){
            int i =1;
            set <int> s;
            while(i!=n)
            {
                for(int j=0;j<n-i;j++){
                    s.insert(p[i+j] - p[j]);
                }
                i++;
            }
            cout<<s.size()<<"\n";
        }
        
    }
}
