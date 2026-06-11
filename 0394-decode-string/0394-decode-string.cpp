class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }

private:
    string solve(string& s, int& i) {
        string result = "";
        while (i < s.size() && s[i] != ']') {
            if (isdigit(s[i])) {
                int k = 0;
                while (isdigit(s[i])) k = k * 10 + (s[i++] - '0');
                i++; 
                string inner = solve(s, i);
                i++; 
                while (k--) result += inner;
            } else {
                result += s[i++];
            }
        }
        return result;
    }
};