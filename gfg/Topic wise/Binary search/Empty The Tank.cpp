long long int minDaysToEmpty(long long int C, long long int l) {
        long long int a = C;
        long long int i=1;
        if(a <= l){
            return a;
        }
        else{
            while(a>l){
                if(a - i + l < C){
                    a = a -i + l;
                }
                i++;
            }
            return i-1;
        }
    }
