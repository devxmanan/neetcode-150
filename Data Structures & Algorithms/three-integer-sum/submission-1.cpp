class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < (int)nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

                int j = i + 1;
                int k = (int)nums.size() - 1;
                while (j < k) {
                    if(-nums[i] == nums[j]+nums[k]){
                       result.push_back({nums[i], nums[j], nums[k]});
                       while (j < k && nums[j] == nums[j+1]) j++;
                       while (j < k && nums[k] == nums[k-1]) k--;
                       j++; k--;
                    } else if(-nums[i] < nums[j] + nums[k])
                        k--; 
                    else j++;
                }
            }
        return result;
    }
};