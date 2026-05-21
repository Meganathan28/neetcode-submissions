class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check;
        for(int i = 0; i<nums.size(); i++){
            if(check.count(target - nums[i])) return {check[target - nums[i]], i};
            check[nums[i]] = i;
        }
        return {0,0};
    }
};
