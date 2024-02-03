#include <gtest/gtest.h>
#include"../longest_common_prefix.h"

/*
Input: strs = ["flower","flow","flight"]
Output: "fl"
*/
TEST(LongestCommonPrefixTest, TestExample1)
{
    vector<string> strings = {"flower", "flow", "flight"};
    string expectedResult = "fl";
    auto result = longestCommonPrefix(strings);
    EXPECT_EQ(result, expectedResult);
}

/*
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/
TEST(LongestCommonPrefixTest, TestExample2)
{
    vector<string> strings = {"dog", "racecar", "car"};
    string expectedResult = "";
    auto result = longestCommonPrefix(strings);
    EXPECT_EQ(result, expectedResult);
}

/*
Input: strs = [""]
Output: ""
Explanation: There is no common prefix among the input strings.
*/
TEST(LongestCommonPrefixTest, TestExample3)
{
    vector<string> strings = {""};
    string expectedResult = "";
    auto result = longestCommonPrefix(strings);
    EXPECT_EQ(result, expectedResult);
}

/*
Input: strs = ["", ""]
Output: ""
Explanation: There is no common prefix among the input strings.
*/
TEST(LongestCommonPrefixTest, TestExample4)
{
    vector<string> strings = {"", ""};
    string expectedResult = "";
    auto result = longestCommonPrefix(strings);
    EXPECT_EQ(result, expectedResult);
}