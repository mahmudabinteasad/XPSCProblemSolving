class Solution {
public:
    int longestSubarrayWithSumK(vector<int>& arr, int k) {
        map<int, int> prefixSumMap;
        int sum = 0, maxLen = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum == k) {
                maxLen = i + 1;
            }
            if (prefixSumMap.find(sum - k) != prefixSumMap.end()) {
                maxLen = max(maxLen, i - prefixSumMap[sum - k]);
            }
            if (prefixSumMap.find(sum) == prefixSumMap.end()) {
                prefixSumMap[sum] = i;
            }
        }
        return maxLen;
    }
};
