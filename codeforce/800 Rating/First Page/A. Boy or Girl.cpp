#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    int sum = 0;
    cin>>n;
    for(int i=0;i<n.size();i++){
        for(int j=i+1;j<n.size();j++){
            if(n[i]==n[j] && n[i]!=1){
                n[j] = 1;
                sum++;
            }
        }
    }
    if((n.size()-sum)%2==0){
        cout<<"CHAT WITH HER!";
    }
    else {
        cout<<"IGNORE HIM!";
    }
}
