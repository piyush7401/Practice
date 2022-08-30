int check(int *a, int *b, int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(int i=0;i<n;i++){
        m[b[i]]--;
    }
    for(auto value:m){
        if(value.second != 0){
            return 0;
        }
    }
    return 1;
}
