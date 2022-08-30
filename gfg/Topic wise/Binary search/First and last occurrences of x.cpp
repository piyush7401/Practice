{
    vector<int> p(2);
    int low =0;
    int high = n-1;
    int res =-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] == x){
            res = mid;
            high = mid -1;
        }
        else if(arr[mid] > x){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
    }
    p[0] = res;
    low =0;
    high = n-1;
    res =-1;
    while(low<=high){
        int mid = low + (high -low)/2;
        if(arr[mid] == x){
            res = mid;
            low = mid+1;
        }
        else if(arr[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
    }
    p[1] = res;
    return p;
}
