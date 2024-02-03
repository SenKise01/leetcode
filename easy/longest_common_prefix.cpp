#include"longest_common_prefix.h"

string longestCommonPrefix(vector<string>& strs)
{
    string prefix = "";
    int common = 0;
    int index = 0;
   
    bool equal = true;

    if(strs.size() == 1)
    {
        return strs[0];
    }
    else
    {
        while(equal)
        {
            for(int i = 0; i < strs.size() - 1; ++i)
            {
                if(index >= strs[i].length() && index >= strs[i + 1].length())
                {
                    equal = false;
                    break;
                }
                equal = (strs[i][index] == strs[i + 1][index]) && equal;
                if(!equal)
                    break;
                else if(equal && i == strs.size() - 2)
                    ++index;
            }
        }
    }

    prefix = strs[0].substr(0, index);
    return prefix;
}