class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i=0,j=0,zeroCount=0,ans=INT_MIN;
        int n=nums.size();
        while(j<n)
        {
            if(nums[j]==0)
            {
                zeroCount++;
            }
            while(zeroCount>k)
            {
                if(nums[i]==0)
                {
                    zeroCount--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
        
    }
};

//tc-O(n)-as it processed twice i,j
//sc-O(1)-
