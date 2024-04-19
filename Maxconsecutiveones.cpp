//sliding window-two pointer

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {   int n=nums.size();
        int left = 0, count = 0, maxLen = 0;//count=counting zeros

    for (int right = 0; right < n; ++right) 
    {
        if (nums[right] == 0) 
        {
            ++count;
        }
            while (count > k) 
            {
            if (nums[left] == 0)
             {
                --count;
            }
            ++left;
        }
                maxLen = std::max(maxLen, right - left + 1);
        
    }
    return maxLen;
    }
};
