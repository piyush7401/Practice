#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    while(n--){
        string s;
        cin>>s;
        if(s.find("ch") < s.size() || s.find("he") < s.size() || s.find("ef") < s.size()){
            sum++;
        }
    }
    cout<<sum;
}
