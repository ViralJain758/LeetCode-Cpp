class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int winSum = 0;
        for (int i = 0; i < k; i++) {
            winSum += nums[i];
        }
        int maxsum = winSum;

        for (int i = k; i < n; i++){
            winSum += nums[i];
            winSum -= nums[i-k];
            maxsum = max(maxsum, winSum);
        }
        return (double)maxsum/k;
    }
};