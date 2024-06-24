class Solution {
public:
    string decodeString(string s)
    {
        stack<pair<int,string>>st;  
        string currentString="";  
        int k=0;     
        for(char ch:s)
        {
            if(isdigit(ch))
            {
                k=k*10+(ch-'0');
            }
            else if(ch=='[')
            {
                st.push({k,currentString});
                k=0;
                currentString="";
            }
            else if(ch==']')
            {
                auto[repeatCount,lastString]=st.top();
                st.pop();
                string temp="";
                for(int i=0;i<repeatCount;++i)
                {
                    temp+=currentString;
                }
                currentString=lastString+temp;
            }
            else
            {
                currentString+=ch;
            }
        }
        return currentString;
    }
};
