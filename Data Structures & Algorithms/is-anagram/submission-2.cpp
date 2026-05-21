class Solution {
   public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        vector<int> check(26,0);
        if(n != m) return false;
        for(int i = 0; i<n; i++){
            check[s[i] - 'a']++;
            check[t[i] - 'a']--;
        }
        for(int i = 0; i<26; i++){
            if(check[i] != 0) return false;
        }
        return true;
    }
};
