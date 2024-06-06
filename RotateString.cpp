class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        int n1=s.size();
        int n2=goal.size();

        if(n1!=n2)
        {
            return false;
        }
         string doubled=s+s;
         return doubled.find(goal)!=string::npos;
        
    }
};

//string::npos is a special constant in C++ that represents a value that means "no position."(-1)
//It is used by string functions like find to indicate that a substring was not found.
