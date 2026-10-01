class Solution {
public:
    int romanToInt(string s) {
        int M = 0, value = 0, nextvalue = 0;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == 'I')
                value = 1;
            else if (s[i] == 'V')
                value = 5;
            else if (s[i] == 'X')
                value = 10;
            else if (s[i] == 'L')
                value = 50;
            else if (s[i] == 'C')
                value = 100;
            else if (s[i] == 'D')
                value = 500;
            else if (s[i] == 'M')
                value = 1000;
            if (i == s.length() - 1) {
                M += value;
                continue;
            }
            if (s[i + 1] == 'I')
                nextvalue = 1;
            else if (s[i + 1] == 'V')
                nextvalue = 5;
            else if (s[i + 1] == 'X')
                nextvalue = 10;
            else if (s[i + 1] == 'L')
                nextvalue = 50;
            else if (s[i + 1] == 'C')
                nextvalue = 100;
            else if (s[i + 1] == 'D')
                nextvalue = 500;
            else if (s[i + 1] == 'M')
                nextvalue = 1000;

            if (value >= nextvalue)
                M += value;
            else
                M -= value;
        }

        return M;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna