class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0;
        vector<int> check;
        for(int i = 0; i<n; i++){
            if(nums[i] != val) {
                check.push_back(nums[i]);
                k++;
            }
        }
        nums.clear();
        nums = check;
        return k;
    }
};