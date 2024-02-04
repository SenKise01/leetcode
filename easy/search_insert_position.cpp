#include"search_insert_position.h"

int searchInsert(vector<int>& nums, int target)
{
    int l = 0;
    int r = nums.size() - 1;
    int m;

    while(l <= r)
    {
        m = l + (r - l) / 2;
        if(target == nums[m])
        {
            return m;
        }
        else if(target < nums[m])
        {
            r = m - 1;
        }
        else if(target > nums[m])
        {
            l = m + 1;
        }
    }

    if(target > nums[m])
        return m + 1;
    else
        return m;
}