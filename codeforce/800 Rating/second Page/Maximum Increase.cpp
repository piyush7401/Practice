#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int min =0;
    int max =0;
    for(int i=0;i<n-1;i++){
        if(p[i+1] > p[i]){
            min++;
        }
        else{
            if(min > max){
                max = min;
            }
            min =0;
        }
    }
    if(min>max){
        cout<<min+1<<"\n";
    }
    else{
        cout<<max+1<<"\n";
    }
}
