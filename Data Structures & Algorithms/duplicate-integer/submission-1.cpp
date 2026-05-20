class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
       int n = nums.size();
       unordered_set<int> check;
       for(auto num : nums){
         if(check.count(num)) return true;
          check.insert(num);
       }
       return false;
    }
};