int searchInSorted(int arr[], int N, int K) 
    { 
        int low =0;
        int high = N-1;
       if(check(arr,low,high,K) == 1){
           return 1;
       }
       else{
           return -1;
       }
       
    }
    
    int check(int arr[],int low,int high,int k){
        int mid = (low + high)/2;
        if(low<=high){
            if(arr[mid] > k){
                return check(arr,low,mid-1,k);
            }
            else if(arr[mid] < k){
                return check(arr,mid+1,high,k);
            }
            else{
                return 1;
            }
        }
        else{
            return 0;
        }
    }
