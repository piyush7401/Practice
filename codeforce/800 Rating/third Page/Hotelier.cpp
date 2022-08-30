#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> p(10);
    for(int i=0;i<n;i++){
        if(s[i] == 'L'){
            for(int j=0;j<n;j++){
                if(p[j] == 0){
                    p[j] = 1;
                    break;
                }
            }
        }
        else if(s[i] == 'R'){
            for(int j=9;j>=0;j--){
                if(p[j] == 0){
                    p[j] = 1;
                    break;
                }
            }
        }
        else{
            p[s[i] - 48] = 0;
        }
    }
    for(int i=0;i<10;i++){
        cout<<p[i];
    }
}
