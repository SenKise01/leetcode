#include <gtest/gtest.h>
#include"../search_insert_position.h"

/*
Input: nums = [1,3,5,6], target = 5
Output: 2
*/
TEST(SearchInsertPositionTests, TestExample1)
{
    vector<int> input = {1, 3, 5, 6};
    auto result = searchInsert(input, 5);
    EXPECT_EQ(result, 2);
}

/*
Input: nums = [1,3,5,6], target = 2
Output: 1
*/
TEST(SearchInsertPositionTests, TestExample2)
{
    vector<int> input = {1, 3, 5, 6};
    auto result = searchInsert(input, 2);
    EXPECT_EQ(result, 1);
}

/*
Input: nums = [1,3,5,6], target = 7
Output: 4
*/
TEST(SearchInsertPositionTests, TestExample3)
{
    vector<int> input = {1, 3, 5, 6};
    auto result = searchInsert(input, 7);
    EXPECT_EQ(result, 4);
}