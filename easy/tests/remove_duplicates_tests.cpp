#include <gtest/gtest.h>
#include"../remove_duplicates.h"

/*
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
*/
TEST(RemoveDuplicatesTests, TestExample1)
{
    vector<int> input = {1, 1, 2};
    vector<int> expected = {1, 2};
    EXPECT_EQ(removeDuplicates(input), 2);

    for(size_t i = 0; i < expected.size(); ++i)
    {
        EXPECT_EQ(expected[i], input[i]);
    }
}

/*
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
*/
TEST(RemoveDuplicatesTests, TestExample2)
{
    vector<int> input = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> expected = {0, 1, 2, 3, 4};
    EXPECT_EQ(removeDuplicates(input), 5);

    for(size_t i = 0; i < expected.size(); ++i)
    {
        EXPECT_EQ(expected[i], input[i]);
    }
}
