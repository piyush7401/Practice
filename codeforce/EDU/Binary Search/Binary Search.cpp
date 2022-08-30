#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<long int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<k;i++){
        int c;
        cin>>c;
        int low =0;
        int high = n-1;
        int flag =0;
        while(low<=high){
            int mid = low + (high -low)/2;
            if(p[mid] == c){
                cout<<"YES"<<"\n";
                flag =1;
                break;
            }
            else if(p[mid] > c){
                high = mid -1;
            }
            else if(p[mid] < c){
                low = mid + 1;
            }
        }
        if(flag == 0 ){
            cout<<"NO"<<"\n";
        }
    }
}
