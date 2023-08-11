https://www.codingninjas.com/studio/problems/mnfrj_1075018?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1


#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    int n = pattern.size();
    int opencount = 0;
    int closecount = 0;
    for(int i = 0;i< n;i++){
        if(pattern[i] == '('){
            opencount++;
        }
        else if(pattern[i] == ')'&& opencount > 0){
            opencount--;
        }
        else{
            closecount++;
        }
    }
    return opencount + closecount;
}
