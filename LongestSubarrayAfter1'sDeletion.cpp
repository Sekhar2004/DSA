class Solution {
public:
    int longestSubarray(vector<int>& nums)
    {
        int n=nums.size();
        int left=0;
        int right=0;
        int zc=0;
        int max_length=0;
        for(int right=0;right<n;right++)
        {
            if(nums[right]==0)
            {
             zc++;
            }
        while(zc>1)
        {
            if(nums[left]==0)
            {
                zc--;
            }
            left++;
        }
         max_length=max(max_length,right-left);

        }
        return max_length;
    }
    
};

//tc-O(n)
//sc-0(1)
