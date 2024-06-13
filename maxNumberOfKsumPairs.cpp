class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int left=0;
        int right=size-1;
        int count=0;
        while(left<right)
        {
            int sum=nums[left]+nums[right];
            if(sum==k)
            {
                count++;
                left++;
                right--;
            }
            else if(sum<k)
            {
                left++;
            }
            else 
            {
                right--;
            }
        }
        return count;
    }
};

(* std::unordered_map<int, int>countMap;
int operations=0;
 for(int num:nums) 
{
int complement=k-num;
if(countMap[complement]>0) 
{
operations++;
countMap[complement]--;
} 
else 
{
countMap[num]++;
}
}

return operations; *)
