class Solution {
public:
    int maxDepth(string s) {
        int m=0,n=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                m++;
                n=max(m,n);
            }
            if(s[i]==')'){
                m--;
            }
        }
        return n;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna