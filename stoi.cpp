class Solution {
public:
    int myAtoi(string s) 
    {
        int i=0;
        int sign=1;
        long ans=0;
        int n=s.length();
        //for spaces
        while(i<n&&s[i]==' ')
        {
            i++;
        }
        //negative ki
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        //positive ki
        else if(s[i]=='+')
        {
            i++;
        }
        while(i<s.length())
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                ans=ans*10+(s[i]-'0');
                //overflow

                if(ans>INT_MAX&&sign==-1)
                {
                        return INT_MIN;
                }
                else if(ans>INT_MAX&&sign==1)
                {
                    return INT_MAX;
                }
                i++;
            }
            else
                {
                    
                    break;
                }
        }
        //give result multiplied by sign
        return(ans*sign);
    }
};

/*

conditions

-ignore white space
-continue sign
-skip zeroes
-digit



*/
