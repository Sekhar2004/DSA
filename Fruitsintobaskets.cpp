//sliding window
//my map hash map is uses here inorder to count the frequency of every fruit type....

#include <vector>
#include <unordered_map>
#include <algorithm>

int findMaxFruits(std::vector<int>& arr, int n) 
{
    int left = 0, right = 0, maxLen = 0;
    std::unordered_map<int, int> mymap;

    while (right < n)
     {
         mymap[arr[right]]++;
        if (mymap.size() > 2)
         {
            --mymap[arr[left]];
            if (mymap[arr[left]] == 0) 
            {
                mymap.erase(arr[left]);
            }
            ++left;
        }

        maxLen = std::max(maxLen, right - left + 1);
        ++right;
    }

    return maxLen;
}

