#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int find(int arr[],int low,int high) 
    {
       int n = high +1;
    while(low<=high){
        int mid = low + (high - low)/2;
        int prev = ((mid - 1 + n)%n);
        int next = (mid + 1)%n;
        if(arr[mid] <= arr[prev] && arr[mid] <= arr[next]){
            return arr[mid];
        }
        else if(arr[low] <= arr[mid] && arr[high] < arr[mid]){
            low = mid + 1;
            cout<<arr[mid]<<"\n";
        }
        else if(arr[high] >= arr[mid] && arr[low] > arr[mid]){
            high = mid - 1;
            cout<<arr[mid]<<"\n";
        }
        else if(arr[low] <= arr[mid] && arr[mid] <= arr[high]){
            return arr[low];
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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        int ans = ob.find(a,0,n-1);
        cout<<ans<<"\n";
    }
}
