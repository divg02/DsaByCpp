https://www.codingninjas.com/studio/problems/pair-sum_1171154?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=0

// Two pointer approach
#include <bits/stdc++.h> 
using namespace std;

int pairSum(vector<int> &arr, int n, int target) {
    unordered_map<int, int> freq; // Hash map to store number frequencies
    int count = 0;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (freq.find(complement) != freq.end()) {
            count += freq[complement]; // Increment count with the frequency of the complement
        }
        freq[arr[i]]++; // Increment the frequency of the current element
    }

    return (count > 0) ? count : -1;
}
