class Solution {
public:
    bool isPalindrome(int x) {
        string torev = to_string(x);
        reverse(torev.begin(), torev.end());
        return to_string(x) == torev;
        
        
    }
};