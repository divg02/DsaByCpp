https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <string>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int maxLength = 0;
        int i = 0;
        int j = 0;
        
        while (i < s.size() && j < s.size()) {
            if (charSet.find(s[j]) == charSet.end()) {
                charSet.insert(s[j]);
                j++;
                maxLength = std::max(maxLength, j - i);
            } else {
                charSet.erase(s[i]);
                i++;
            }
        }
        
        return maxLength;
    }
};
