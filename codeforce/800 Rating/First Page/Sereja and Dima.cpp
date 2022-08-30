#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int s =0;
    int d =0;
    int i=0;
    int j= n-1;
    int m = 1;
    while(i<=j){
        if(v[i]>v[j])
        {
            if(m%2==1)
            {
                s = s + v[i];
                i++;
            }
            else
            {
                d = d + v[i];
                i++;
            }
        }
        else
        {
            if(m%2==1)
            {
                s = s + v[j];
                j--;
            }
            else
            {
                d = d + v[j];
                j--;
            }
        }
        m++;    
    }
    cout<<s<<" "<<d;
}
