class Solution {
public:
    
    void fun(vector<int> &nums,int n,int index,vector<int> &dp,set<vector<int>> &m){
        if(index == n){
            sort(dp.begin(),dp.end());
            m.insert(dp);
            return;
        }
        else{
            dp.push_back(nums[index]);
            fun(nums,n,index+1,dp,m);
            dp.pop_back();
            fun(nums,n,index+1,dp,m);
        }
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> m;
        vector<int> dp;
        fun(nums,n,0,dp,m);
        vector<vector<int>> v; 
        for(auto val : m){
            v.push_back(val);
        }
        return v;
    }
};