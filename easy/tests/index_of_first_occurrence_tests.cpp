#include<gtest/gtest.h>
#include "../index_of_first_occurrence.h"

/*
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
*/
TEST(IndexOfFirstOccurrenceTests, TestExample1)
{
    int expectedResult = 0;
    auto result = strStr("sadbutsad", "sad");
    EXPECT_EQ(result, expectedResult);
}

/*
Input: haystack = "leetcode", needle = "leeto"
Output: 0
*/
TEST(IndexOfFirstOccurrenceTests, TestExample2)
{
    int expectedResult = -1;
    auto result = strStr("leetcode", "leeto");
    EXPECT_EQ(result, expectedResult);
}

/*
Input: haystack = "aaa", needle = "a"
Output: 0
*/
TEST(IndexOfFirstOccurrenceTests, TestExample3)
{
    int expectedResult = 0;
    auto result = strStr("aaa", "a");
    EXPECT_EQ(result, expectedResult);
}

/*
Input: haystack = "aaa", needle = "aaaa"
Output: 0
*/
TEST(IndexOfFirstOccurrenceTests, TestExample4)
{
    int expectedResult = -1;
    auto result = strStr("aaa", "aaaa");
    EXPECT_EQ(result, expectedResult);
}

/*
Input: haystack = "mississippi", needle = "issip"
Output: 4
*/
TEST(IndexOfFirstOccurrenceTests, TestExample5)
{
    int expectedResult = 4;
    auto result = strStr("mississippi", "issip");
    EXPECT_EQ(result, expectedResult);
}

/*
Input: haystack = "hello", needle = "ll"
Output: 2
*/
TEST(IndexOfFirstOccurrenceTests, TestExample6)
{
    int expectedResult = 2;
    auto result = strStr("hello", "ll");
    EXPECT_EQ(result, expectedResult);
}