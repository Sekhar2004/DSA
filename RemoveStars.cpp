class Solution {
public:
    string removeStars(string s)
    {
        stack<char>st;
        for(char ch:s)
        {
            if(ch=='*')
            {
                if(!st.empty())
                {
                  st.pop();
                }
            }
            else
            {
                st.push(ch);
            }
        }
        string result;
        while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
//TC-O(n)
//SC-O(n)-string length
