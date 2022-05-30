class Solution {
public:
    string findPalindrome(string s, int left, int right)
    {
        int n = s.size();
        int l = left;
        int r = right;
        while (left>=0 && right<=n-1 && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left+1, right-left-1);
    }
    
    string longestPalindrome1(string s) {
        int n = s.size();
        if (n<=1) return s;

        string longest;

        string str;
        for (int i=0; i<n-1; i++) {
            str = findPalindrome(s, i, i);
            if (str.size() > longest.size()){
                longest = str;
            } 
            str = findPalindrome(s, i, i+1);
            if (str.size() > longest.size()){
                longest = str;
            } 
        }

        return longest; 
    }
    // ====================================

    bool is_palindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        return s == rev;
    }

    string longestPalindrome2(string s) {
        int best_len = 0;
        string best_s = "";
        int n = s.length();

        for(int L = 0; L < n; L++) {
            for(int R = L; R < n; R++) {
                int len = R - L + 1;
                string subs = s.substr(L, len);
                if(is_palindrome(subs) && len > best_len) {
                    best_len = len;
                    best_s = subs;
                }
            }
        }
        return best_s;
    }
};