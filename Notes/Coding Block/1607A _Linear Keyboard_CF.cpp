#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v(27);
        string s;
        cin>>s;
        for(int i=1;i<27;i++){
            v[s[i-1] - 96] = i;
        }
        string s1;
        cin>>s1;
        int sum =0;
        for(int i=0;i<s1.size()-1;i++){
            sum = sum + abs(v[s1[i]-96] - v[s1[i+1]-96]);
        }
        cout<<sum<<"\n";
    }
}
