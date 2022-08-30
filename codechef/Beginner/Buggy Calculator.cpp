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
        int rev =0;
        int j =0;
        if(p[i].first>p[i].second){
        while(p[i].first>0){
            int a = p[i].first%10;
            p[i].first = p[i].first/10;
            int b = p[i].second%10;
            p[i].second = p[i].second/10;
            if(a+b>9){
                rev = rev + pow(10,j)*(a+b-10);
            }
            else{
                rev = rev + (a+b)*pow(10,j);
            }
            j++;
        }
        }
        else{
        while(p[i].second>0){
            int a = p[i].first%10;
            p[i].first = p[i].first/10;
            int b = p[i].second%10;
            p[i].second = p[i].second/10;
            if(a+b>9){
                rev = rev + pow(10,j)*(a+b-10);
            }
            else{
                rev = rev + (a+b)*pow(10,j);
            }
            j++;
        }
        }
        cout<<rev<<"\n";
    }
}
