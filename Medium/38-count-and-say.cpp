class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for (int k = 2; k <= n; k++) {
            string temp = "";
            int count = 1;

            for (int i = 1; i <= s.size(); i++) {
                if (i < s.size() && s[i] == s[i - 1]) {
                    count++;
                } else {
                    temp += to_string(count);
                    temp += s[i - 1];
                    count = 1;
                }
            }

            s = temp;
        }

        return s;
    }
};