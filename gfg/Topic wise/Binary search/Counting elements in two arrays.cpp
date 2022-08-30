{
        vector<int> a(m);
        sort(arr2,arr2+n);
        for(int i=0;i<m;i++){
            int low =0;
            int high = n-1;
            int res =-1;
            int res1=-1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(arr1[i] == arr2[mid]){
                    res = mid;
                    low = mid+1;
                }
                else if(arr1[i] > arr2[mid]){
                    res1 = mid;
                    low = mid +1;
                }
                else if(arr1[i] < arr2[mid]){
                    high = mid -1;
                }
            }
            if(res ==-1 && res1 ==-1){
                a[i] = 0;
            }
            else{
                a[i] = max(res,res1) +1;
            }
        }
        return a;
    }
