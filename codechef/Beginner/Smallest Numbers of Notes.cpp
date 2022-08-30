#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> p(t);
    for(int i=0;i<t;i++){
        cin>>p[i];
    }
    for(int i=0;i<t;i++)
    {
    int sum =0;
    while(p[i]>0){
        if(p[i]>=100){
            p[i] = p[i] - 100;
            sum++;
        }
        else if(p[i]>=50){
            p[i] = p[i] - 50;
            sum++;
        }
        else if(p[i]>=10){
            p[i] = p[i] - 10;
            sum++;
        }
        else if(p[i]>=2){
            p[i] = p[i] - 2;
            sum++;
        }
        else{
            p[i] = p[i] - 1;
            sum++;
        }
    }
    cout<<sum<<"\n";
    }
}
