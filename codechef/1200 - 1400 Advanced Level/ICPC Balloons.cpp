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
        set<int> s;
        int flag =0;
        for(int i=0;i<n;i++){
            if(p[i] <= 7 && s.size() != 7){
                s.insert({p[i]});
            }
            if(s.size() == 7){
                cout<<i+1<<"\n";
                flag =1;
                break;
            }
        }
        if(flag == 0){
            cout<<n<<"\n";
        }
    }
}
