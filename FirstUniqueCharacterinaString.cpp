https://leetcode.com/problems/first-unique-character-in-a-string/?envType=featured-list&envId=top-interview-questions
#include<bits/stdc++.h>
class Solution {
public:
    int firstUniqChar(string s) {
       int charFrequency[26] = {0}; // Store character frequencies
       
       // Count the frequency of each character
       for (char c : s) {
           charFrequency[c - 'a']++;
       }
       
       // Find the index of the first unique character
       for (int i = 0; i < s.size(); i++) {
           if (charFrequency[s[i] - 'a'] == 1) {
               return i;
           }
       }
       
       return -1; // No unique character found
    }
};
