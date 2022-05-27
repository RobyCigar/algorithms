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
    
    string longestPalindrome(string s) {
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
};