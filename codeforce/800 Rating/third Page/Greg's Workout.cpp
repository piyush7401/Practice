#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int chest =0;
    int biceps =0;
    int back =0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(i%3==1){
            chest = chest + x;
        }
        else if(i%3==2){
            biceps = biceps + x;
        }
        else{
            back = back + x;
        }
    }
    if(chest > biceps && chest > back){
        cout<<"chest"<<"\n";
    }
    else if(biceps > chest && biceps > back){
        cout<<"biceps"<<"\n";
    }
    else{
        cout<<"back"<<"\n";
    }
}
