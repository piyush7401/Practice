#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] =s[i] + 32;
        }
    }
    int arr[26] = {0};
    for(int i=0;i<n;i++){
        arr[s[i] - 97]++;
    }
    bool flag =0;
    for(int i=0;i<26;i++){
        if(arr[i] == 0){
            cout<<"NO"<<"\n";
            flag = 1;
            break;
        }
    }
    if(flag == false){
        cout<<"YES"<<"\n";
    }
}
