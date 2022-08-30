#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int find(vector<int>& a) 
    {
        int low =0;
        int high = a.size() - 1;
        while(low<=high){
            int mid= low + (high-low)/2;
            if(a[mid] > a[mid-1] && a[mid] > a[(mid+1)]){
                return a[mid];
            }
            else if(a[mid] < a[mid+1] && a[mid] > a[mid-1]){
                low = mid +1;
            }
            else if(a[mid] < a[mid-1] && a[mid] > a[mid+1]){
                high = mid-1;
            }
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        int ans = ob.find(a);
        cout<<ans<<"\n";
    }
}
