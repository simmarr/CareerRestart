#include <bits/stdc++.h>
using namespace std;

// LeetCode 424 - Longest Repeating Character Replacement
//
// Pattern: Variable Sliding Window
//
// Key idea:
// For any window,
// replacements needed = window size - frequency of most common character
//
// If replacements needed > k,
// shrink the window from the left.
//
// Time Complexity: O(n)
// Space Complexity: O(1)
// Since the string contains only uppercase English letters,
// the frequency map can contain at most 26 keys.

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;

        int left = 0;
        int largest = 0;
        int maxFrequency = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right]]++;

            maxFrequency = max(maxFrequency, freq[s[right]]);

            while ((right - left + 1) - maxFrequency > k) {
                freq[s[left]]--;
                left++;
            }

            int current = right - left + 1;
            largest = max(largest, current);
        }

        return largest;
    }
};