class solution
{
public:
    
    void fun(vector<int> &arr,int index,int n,map<int,int> &m,int sum){
        if(index == n){
            m[sum]++;
            return;
        }
        else{
            sum = sum + arr[index];
            fun(arr,index+1,n,m,sum);
            sum = sum - arr[index];
            fun(arr,index+1,n,m,sum);
        }
    }


    vector<int> subsetSums(vector<int> arr, int N)
    {
        sort(arr.begin(),arr.end());
        map<int,int> m;
        int sum =0;
        fun(arr,0,N,m,sum);
        vector<int> v;
        for(auto val : m){
            for(int i=0;i<val.second;i++){
                v.push_back(val.first);
            }
        }
        return v;
        // Write Your Code here
    }
};