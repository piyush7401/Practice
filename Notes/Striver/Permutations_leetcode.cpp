class Solution {
public:
    
    void fun(int n,vector<int> &ds,vector<int> &freq,vector<vector<int>> &ans,vector<int> &nums){
        if(ds.size() == n){
            ans.push_back(ds);
            return;
        }
            for(int i=0;i<n;i++){
                if(freq[i] == 0){
                    freq[i] = 1;
                    ds.push_back(nums[i]);
                    fun(n,ds,freq,ans,nums);
                    freq[i] = 0;
                    ds.pop_back();
                }
            }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> ds;
        vector<int> freq(n,0);
        fun(n,ds,freq,ans,nums);
        return ans;
    }
};