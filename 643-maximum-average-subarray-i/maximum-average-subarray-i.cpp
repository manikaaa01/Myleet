class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        int maxSum = INT_MIN;
        for (int i = 0; i <= n - k; i++) {
            int sum = prefix[i + k] - prefix[i];
            maxSum = max(maxSum, sum);
        }
        return (double )maxSum / k;
    }
};