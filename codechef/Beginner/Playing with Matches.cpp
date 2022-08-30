#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<pair<int,int>>p(t);
    for(int i=0;i<t;i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<t;i++){
        p[i].first = p[i].first + p[i].second;
        int sum =0;
        while(p[i].first !=0){
            int a = p[i].first%10;
            if(a ==0 || a== 6 || a==9){
                sum = sum +6;
            }
            else if(a==2 || a==3 || a==5){
                sum =sum + 5;
            }
            else if(a==8){
                sum = sum +7;
            }
            else if(a==4){
                sum = sum + 4;
            }
            else if(a==1){
                sum = sum +2;
            }
            else{
                sum = sum +3;
            }
            p[i].first = p[i].first/10;
        }
        cout<<sum<<"\n";
    }
}
