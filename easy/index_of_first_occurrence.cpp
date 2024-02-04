#include "index_of_first_occurrence.h"

int strStr(string haystack, string needle)
{
    int result = -1;
    int index = 0;

    if(haystack.size() < needle.size())
        return result;

    for(size_t i = 0; i < haystack.size(); ++i)
    {
        result = -1;
        index = 0;
        while(true)
        {
            if(haystack[i + index] != needle[index])
                break;
            else
            {
                if(index + 1 == needle.size())
                    return i;
                ++index;
            }
        }
    }

    return result;
}