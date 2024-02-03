#include"remove_duplicates.h"

int removeDuplicates(vector<int>& nums)
{
    int noOfUnique = 0;
    bool hashMap[202] = {false};
    int index = 0;
    for(const auto element : nums)
    {
        index = element + 100;
        if(!hashMap[index])
            hashMap[index] = true;
    }

    if(nums.size() != 0)
    {
        for(size_t i = 0; i < sizeof(hashMap); ++i)
        {
            if(hashMap[i] == true)
            {
                nums[noOfUnique] = i - 100;
                ++noOfUnique;
            }
        }
    }

    return noOfUnique;
}