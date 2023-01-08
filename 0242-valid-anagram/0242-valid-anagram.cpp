class Solution {
public:
    bool isAnagram(string s, string t) {
        int s2[26] = {0};
        int t2[26] = {0};
        
        if(s.length() != t.length()) return false;
        
        for(int i=0;i<s.size();i++){
            s2[s[i] - 'a']++;
            t2[t[i] - 'a']++;
        }
        for(int i =0;i<26;i++){
            if(s2[i] != t2[i]) return false;
        }
      return true;  
    }
    
};