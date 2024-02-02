#include"two_sum.h"


vector<int> twoSum(vector<int>& nums, int target) 
{
    std::vector<int> indices;
    for(size_t i = 0; i < nums.size(); ++i)
    {
        for(size_t j = i + 1; j < nums.size(); ++j)
        {
            if(nums[i] + nums[j] == target)
            {
                indices.push_back(i);
                indices.push_back(j);
                break;
            }
        }   
    }
    return indices;
}