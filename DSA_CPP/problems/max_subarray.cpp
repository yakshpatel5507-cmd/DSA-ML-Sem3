class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size() , ans = INT_MIN;
        for (int i=0;i<n;i++)
        {
            int cursum = 0;
            for(int j=i;j<n;j++)
            {
                cursum+=nums[j];
                ans = max(ans,cursum);
            }
        }
        return ans;
    }
};
