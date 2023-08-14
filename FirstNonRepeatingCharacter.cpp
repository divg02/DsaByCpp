https://www.codingninjas.com/studio/problems/first-non-repeating-character_920324?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=0

#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {
       map<char,int> ans;
       for(int i = 0;i<str.size();i++){
           ans[str[i]]++;
       }
       for(int i = 0;i<str.size();i++){
           if(ans[str[i]] == 1){
               return str[i];
               break;
           }
       }
       return str[0];
}
