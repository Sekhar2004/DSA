bool areIsomorphic(string &str1, string &str2)
{
    if(str1.length()!=str2.length())
    {
        return false;

    }


    unordered_map<char,char> map1,map2;

    for(int i=0;i<str1.length();i++)
    {
        char ch1=str1[i];
        char ch2=str2[i];


        if (map1.find(ch1) == map1.end()) {
            map1[ch1] = ch2;
        } else {
            if (map1[ch1] != ch2) {
                return false;
            }
        }

        if (map2.find(ch2) == map2.end()) {
            map2[ch2] = ch1;
        } else {
            if (map2[ch2] != ch1) {
                return false;
            }
        }
    }

    return true;

    }


