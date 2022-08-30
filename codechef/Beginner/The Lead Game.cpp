#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int max = 0;
    int j=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a-b>0){
            v[i] = 1;
            if(max<a-b){
                max = a-b;
                j = v[i];
            }
        }
        else{
            v[i] = 2;
            if(max<b-a){
                max = b-a;
                j = v[i];
            }
        }
    }
    cout<<j<<" "<<max;
}
