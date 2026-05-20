class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans_array(2*n);
        // for(int i = 0; i<ans_array.size(); i++){
            // ans_array[i] = nums[i%n];
          for(int i = 0; i<n; i++){
            ans_array[i] = ans_array[i+n] = nums[i];
        }
        return ans_array;
    }
};