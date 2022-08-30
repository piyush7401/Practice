{ 
        sort(p,p+n);
        int low =0;
        int high = n-1;
        int res =-1e4;
        int res1 =1e4;
        while(low <= high){
            int mid = low + (high -low)/2;
            if(p[mid] == target){
                return p[mid];
            }
            else if(p[mid] > target){
                res1 = p[mid];
                high = mid -1;
            }
            else if(p[mid] < target){
                res = p[mid];
                low = mid +1; 
            }
        }
        if(abs(target - res) < abs(res1 - target)){
            return res;
        }
        else{
            return res1;
        }
    }
