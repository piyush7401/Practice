#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[26] = {0};
        int count = 0;
        string s1,s2;
        cin>>s1;
        for(int i=0;i<s1.size();i++){
            arr[s1[i]-'a']++;
        }
        cin>>s2;
        for(int i=0;i<s2.size();i++){
            arr[s2[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                count = count + abs(arr[i]);
            }
        }
        cout<<count<<"\n";
    }
}
