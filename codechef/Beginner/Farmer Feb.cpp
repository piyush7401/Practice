#include<bits/stdc++.h>
using namespace std;

int check(int sum){
    for(int i=2;i<sum/2;i++){
        if(sum%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<n;i++){
        int sum = p[i].first + p[i].second+1;
        while(!check(sum)){
            sum++;
        }
        cout<<sum - p[i].first - p[i].second<<"\n";
    }
}
