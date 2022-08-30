#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        set<int> s1;
        s1.insert(x);
        for(int i=0;i<n;i++){
            if(s[i] == 'R'){
                ++x;
                s1.insert(x);
            }
            else{
                --x;
                s1.insert(x);
            }
        }
        cout<<s1.size()<<"\n";
    }
}
