class Solution {
  public:
	int pivotIndex(vector<int> &nums)
    {
		int total=0;
        int n=nums.size();
		for(int x:nums) 
        {
            total+=x;
        }    
		int leftsum=0;
		for(int i=0;i<n;i++)
        {
			if (leftsum==total-leftsum-nums[i])
            {
            return i;
            }
			leftsum+=nums[i];
		}
		return -1;
	}
};
//tc-O(n)-traverse array twice ,one for calculating total sum and one for finding pivot index
//sc-O(1)-constant amount of extra space
