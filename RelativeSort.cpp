class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
       unordered_map<int,int>countarr1;
       for(int num:arr1)
       {
        countarr1[num]++;
       } 
       vector<int>result;
       for(int num:arr2)
       {
        if(countarr1.find(num)!=countarr1.end())
        {
            while(countarr1[num]>0)
            {
                result.push_back(num);
                countarr1[num]--;
            }
            countarr1.erase(num);
        }
       }
       vector<int>remaining;
       for(auto&rem:countarr1)
       {
        while(rem.second>0)
        {
            remaining.push_back(rem.first);
            rem.second--;
        }
       }
       sort(remaining.begin(),remaining.end());
       for(int num:remaining)
       {
        result.push_back(num);
       }
       return result;
        
    }
};

//tc-O(nlogn)
//sc-O(n)
