class Solution {
public:
    void solve(vector<vector<int>> & res, vector<int> & arr, vector<int> & curr, int i, int target)
    {
        if(i >= arr.size() || target <= 0)
        {
            if(target == 0) res.push_back(curr);
            return;
        }
        curr.push_back(arr[i]);
        solve(res, arr, curr, i, target - arr[i]);
        curr.pop_back();
        solve(res, arr, curr, i + 1, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        solve(res, candidates, curr, 0, target);
        return res;
    }
};
