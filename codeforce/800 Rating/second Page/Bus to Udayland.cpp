#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if((p[i][j] == 'O' && p[i][j+1] == 'O') && flag ==0){
                cout<<"YES"<<"\n";
                p[i][j] = '+';
                p[i][j+1] = '+';
                flag =1;
                break;
            }
        }
    }
    if(flag ==0){
        cout<<"NO"<<"\n";
    }
    else{
        for(int i=0;i<n;i++){
            cout<<p[i]<<"\n";
        }
    }
    
}
