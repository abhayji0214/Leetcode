class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int k = p.size();
        if (k > s.size()) return res;

        for (int i = 0; i <= (int)s.size() - k; i++) {
            int freq[26] = {};

            for (int j = i; j < i + k; j++)   
                freq[s[j] - 'a']++;

            for (int j = 0; j < k; j++)       
                freq[p[j] - 'a']--;

            bool match = true;
            for (int j = 0; j < 26; j++) {
                if (freq[j] != 0) {
                    match = false;
                    break;
                }
            }
            if (match) res.push_back(i);
        }

        return res;
    }
};
