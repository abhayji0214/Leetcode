class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char, int> freq;

        for (char c : s)
            freq[c]++;

        string left = "", mid = "";

        vector<char> chars;
        for (auto it : freq)
            chars.push_back(it.first);

        sort(chars.begin(), chars.end());

        for (char c : chars) {
            if (freq[c] % 2 == 1)
                mid = c;

            left += string(freq[c] / 2, c);
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }   
};