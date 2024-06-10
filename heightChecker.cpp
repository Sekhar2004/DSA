//using counting sort
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int heightCount[101] = {0};
        for (int height : heights) {
            heightCount[height]++;
        }
        int cnt = 0;
        int currentHeight = 0;
        for (int i = 0; i < heights.size(); ++i) {
            while (heightCount[currentHeight] == 0) {
                currentHeight++;
            }
            if (heights[i] != currentHeight) {
                cnt++;
            }
            heightCount[currentHeight]--;
        }
        return cnt;
    }
};


//using normal sort function with tc-non linear
class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        int n=heights.size();
        vector<int>v=heights;
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(heights[i]!=v[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};



