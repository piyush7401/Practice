#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        int arr[26] = {0};
        for(int j=0;j<p[i].size()/2;j++)
        {
            arr[p[i][j] - 97]++;
        }
        if(p[i].size()%2==1)
        {
            for(int k=(p[i].size()/2)+1;k<p[i].size();k++)
            {
                arr[p[i][k] - 97]--;
            }
        }
        else
        {
            for(int k=(p[i].size()/2);k<p[i].size();k++)
            {
                arr[p[i][k] - 97]--;
            }
            
        }
        int flag =0;
        for(int i=0;i<26;i++){
            if(arr[i] != 0){
                cout<<"NO"<<"\n";
                flag =1;
                break;
            }
        }
        if(flag == 0){
            cout<<"YES"<<"\n";
        }
    }
}
