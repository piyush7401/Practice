#include<bits/stdc++.h>
using namespace std;
void check(vector<string> p[],int n,int m){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(p[i][j] == "Y" || p[i][j] == "C" || p[i][j] == "M")
            {
                cout<<"#Color"<<"\n";
                return;
            }
        }
    }
    cout<<"#Black&White"<<"\n";
    return;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> p[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            string s;
            cin>>s;
            p[i].push_back(s);
        }  
    }
    check(p,n,m);
}
