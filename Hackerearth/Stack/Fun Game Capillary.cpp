#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p1(n);
    for(int i=0;i<n;i++){
        cin>>p1[i];
    }
    vector <int> p2(n);
    p2 = p1;
    reverse(p1.begin(),p1.end());
    int i=0;
    int j=0;
    while(i<= p1.size() -1 && j <= p1.size() - 1){
        if(p2[i] > p1[j]){
            cout<<1<<"\n";
            j++;
        }
        else if(p2[i] < p1[j]){
            cout<<2<<"\n";
            i++;
        }
        else{
            cout<<0<<"\n";
            i++;
            j++;
        }
    }
}
