class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";

        
        for (int len = strs[0].size(); len >= 1; len--) {
            string candidate = strs[0].substr(0, len);
            bool allMatch = true;

            for (int i = 1; i < strs.size(); i++) {
                if (strs[i].size() < len || strs[i].substr(0, len) != candidate) {
                    allMatch = false;
                    break;
                }
            }

            if (allMatch)
                return candidate;
        }

        return "";
    }
};