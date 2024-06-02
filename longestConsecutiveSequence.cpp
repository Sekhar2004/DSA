class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
    if (n == 0) return 0;

    int longestStreak = 1;
    int currentStreak = 1;
    sort(nums.begin(), nums.end());
    for (int i = 1; i < n; ++i) 
    {
        if (nums[i] != nums[i - 1]) 
        {
            if (nums[i] == nums[i - 1] + 1) 
            {
                currentStreak++;
            } 
            else 
            {
                longestStreak = max(longestStreak, currentStreak);
                currentStreak = 1;
            }
        }
    }

    return max(longestStreak, currentStreak);

        
    }
};
