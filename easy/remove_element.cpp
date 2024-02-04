#include"remove_element.h"

int removeElement(vector<int>& nums, int val)
{
    int hashMap[101] = {0};
    int others = 0;

    for(const auto num : nums)
    {
        if(num != val)
        {
            ++hashMap[num];
            ++others;
        }
    }

    int index = 0;
    for(size_t i = 0; i <= 100; ++i)
    {
        while(hashMap[i] > 0)
        {
            nums[index++] = i;
            --hashMap[i];
        }
    }

    return others;
}