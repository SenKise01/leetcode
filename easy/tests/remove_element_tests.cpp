#include <gtest/gtest.h>
#include"../remove_element.h"

/*
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
*/
TEST(RemoveElementTests, TestExample1)
{
    vector<int> input = {3, 2, 2, 3};
    vector<int> expectedResultVector = {2, 2};
    int expectedResult = 2;
    auto result = removeElement(input, 3);
    EXPECT_EQ(result, expectedResult);
    sort(input.begin(), input.begin() + result);
    for(size_t i = 0; i < expectedResultVector.size(); ++i)
        EXPECT_EQ(expectedResultVector[i], input[i]);
}

/*
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
*/
TEST(RemoveElementTests, TestExample2)
{
    vector<int> input = {0, 1, 2, 2, 3, 0, 4, 2};
    vector<int> expectedResultVector = {0, 0, 1, 3, 4};
    int expectedResult = 5;
    auto result = removeElement(input, 2);
    EXPECT_EQ(result, expectedResult);
    sort(input.begin(), input.begin() + result);
    for(size_t i = 0; i < expectedResultVector.size(); ++i)
        EXPECT_EQ(expectedResultVector[i], input[i]);
}
