class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxSum = INT_MIN;
      int currentSum = 0;
      for(int i = 0; i < nums.size(); i++){
        if(currentSum < 0) currentSum = nums[i];
        else currentSum += nums[i];
        if(currentSum > maxSum) maxSum = currentSum;
      }
      return maxSum;
    }
};