#include <string>

class Solution {
public:
    std::string gcdOfStrings(string str1, string str2) 
    {
        int n1 = str1.size();
        int n2 = str2.size();
        int gcd_len = gcd(n1, n2);
        string substr = str1.substr(0, gcd_len);
        for (int i = 0; i < n1; i += gcd_len) 
        {
            if (str1.substr(i, gcd_len) != substr) 
            {
                return "";
            }
        }
        for (int i = 0; i < n2; i += gcd_len) 
        {
            if (str2.substr(i, gcd_len) != substr) 
            {
                return "";
            }
        }
        return substr;
    }
private:
    int gcd(int a, int b) 
    {
        while (b != 0) 
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
