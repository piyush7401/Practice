#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[9] = {0};
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x<9)
            {
                if(arr[x]<y)
                {
                    arr[x] = y;
                }
            }
        }
        int sum =0;
        for(int i=0;i<9;i++){
            sum = sum + arr[i];
        }
        cout<<sum<<"\n";
    }
}
