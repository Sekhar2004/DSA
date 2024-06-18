class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker)
    {
        int n=difficulty.size(),m =worker.size();
        vector<pair<int,int>>jobs(n);
        for (int i=0;i<n;++i)
        {
            jobs[i]={difficulty[i],profit[i]};
        }
        sort(jobs.begin(),jobs.end());
        sort(worker.begin(),worker.end());
        int maxProfit=0,totalProfit=0;
        int i=0;
        for(int j=0;j<m;++j)
        {
            while(i<n&&worker[j]>=jobs[i].first) 
            {
                maxProfit=max(maxProfit,jobs[i].second);
                ++i;
            }
            totalProfit+=maxProfit;
        }
        return totalProfit;
    }
};

//TC--sort jobs,workers and iterating through both -O(nlogn+mlogm)
//SC--storing job pairs-O(n)
