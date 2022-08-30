bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int i=0;
    int j=0;
    if(n ==0){
        return 0;
    }
    while(j<size && i< size){
        if(n == (arr[j] - arr[i])){
            return 1;
        }
        else if(n > arr[j] - arr[i]){
            j++;
        }
        else if(n < arr[j] - arr[i]){
            i++;
        }
    }
    return 0;
}
