https://www.codingninjas.com/studio/problems/longest-subset-zero-sum_920321?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=0

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr) {
    int ans = 0;
    vector<int> pref(arr.size() + 1, 0);

    for (int i = 1; i <= arr.size(); i++) {
        pref[i] = arr[i - 1] + pref[i - 1];
    }

    unordered_map<int, int> indexMap;
    for (int i = 0; i < pref.size(); i++) {
        if (indexMap.find(pref[i]) != indexMap.end()) {
            ans = max(ans, i - indexMap[pref[i]]);
        } else {
            indexMap[pref[i]] = i;
        }
    }

    return ans;
}
