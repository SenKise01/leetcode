#include <gtest/gtest.h>
#include"../two_sum.h"


/*
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/
TEST(TwoSumTest, TestExample1)
{
    vector<int> expectedResult = {0, 1};
    vector<int> input = {2, 7, 11, 15};
    constexpr int target = 9;
    auto result = twoSum(input, target);
    ASSERT_EQ(result, expectedResult);
}

/*
Input: nums = [3,2,4], target = 6
Output: [1,2]
*/
TEST(TwoSumTest, TestExample2)
{
    vector<int> expectedResult = {1, 2};
    vector<int> input = {3, 2, 4};
    constexpr int target = 6;
    auto result = twoSum(input, target);
    ASSERT_EQ(result, expectedResult);
}

/*
Input: nums = [3,3], target = 6
Output: [0,1]
*/
TEST(TwoSumTest, TestExample3)
{
    vector<int> expectedResult = {0, 1};
    vector<int> input = {3, 3};
    constexpr int target = 6;
    auto result = twoSum(input, target);
    ASSERT_EQ(result, expectedResult);
}