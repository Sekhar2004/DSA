class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit)
    {
      int n=nums.size();
      int left=0;
      int right=0;
      int maxlen=0;

      int nowmax=nums[0];
      int nowmin=nums[0];

      while(right<n)
      {
        nowmax=max(nowmax,nums[right]);
        nowmin=min(nowmin,nums[right]);

        if(nowmax-nowmin<=limit)
        {
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        else
        {
            left++;
            nowmax=*max_element(nums.begin()+left,nums.begin()+right+1);
            nowmin=*min_element(nums.begin()+left,nums.begin()+right+1);
            right++;
        }
      }
      return maxlen;


    }
};

