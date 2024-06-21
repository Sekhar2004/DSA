class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes)
    {
        int n=customers.size();
        int satisfy=0,maxg=0,current=0;
        for(int i=0;i<n;++i)
        {
            if(grumpy[i]==0)//if not grumpy
            {
                satisfy+=customers[i];//add to satisfy
            }
            else if(i<minutes)//grumpy and in initial window
            {
                current+=customers[i];//extra satisfy
            }
        }
        maxg=current;//1st window gain
        for(int i=minutes;i<n;++i)
        {
            if(grumpy[i]==1)//if grumpy
            {
                current+=customers[i];//adding to current window
            }
            if(grumpy[i-minutes]==1)//grumpy before
            {
                current-=customers[i-minutes];//subtract customer not now in window(before one)
            }
            maxg=max(maxg,current);//updating it with current one
        }
        return satisfy+maxg;
    }
};
// sliding window approach
//TC-O(n)
//SC-O(1)
