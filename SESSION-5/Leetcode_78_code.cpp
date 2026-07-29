class Solution {
public:
    void func(int ind,vector<int>& nums,vector<int>& arr,vector<vector<int>>& ans){
        if(ind==nums.size()){
            ans.push_back(arr);
            return;
        }

        func(ind+1,nums,arr,ans);

        arr.push_back(nums[ind]);
        func(ind+1,nums,arr,ans);

        arr.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;

        func(0,nums,arr,ans);

        return ans;
    }
};
