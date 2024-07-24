class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums)
    {
        int n= nums.size();

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            string s=to_string(nums[i]);
            for(auto &c:s)
            {
                c=mapping[c-'0']+'0';
            }

            int new_val=stoi(s);//stoi->string to integer

            v.push_back({new_val,i});//making pair //make_pair{}

        }

        sort(v.begin(),v.end());

        vector<int> ans(n);

        for(int i=0;i<n;i++)
        {
            int index = v[i].second;   
            ans[i] = nums[index];
        }
        return ans;
    }
     };

//for every element in nums sort the index of it in mapping array

/*

//return

// mapping = [8,9,4,0,2,1,3,5,7,6], nums = [991,338,38]

// 991 -> 669 -> 669
// 338 -> 007 -> 7
// 38 -> 07 ->   7


convert into for all that elements 

merge and write those numbers

then sort then ascending order and replace then with original numbers in nums



/

*/
