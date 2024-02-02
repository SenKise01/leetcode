#include <gtest/gtest.h>
#include"../is_palindrome.h"

/*
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/
TEST(IsPalindromeTest, TestExample1)
{
    int input = 121;
    bool expectedResult = true;
    auto result = isPalindrome(input);
    EXPECT_EQ(result, expectedResult);
}

/*
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
*/
TEST(IsPalindromeTest, TestExample2)
{
    int input = -121;
    bool expectedResult = false;
    auto result = isPalindrome(input);
    EXPECT_EQ(result, expectedResult);
}

/*
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/
TEST(IsPalindromeTest, TestExample3)
{
    int input = 10;
    bool expectedResult = false;
    auto result = isPalindrome(input);
    EXPECT_EQ(result, expectedResult);
}

/*
Input: x = 11
Output: true
*/
TEST(IsPalindromeTest, TestExample4)
{
    int input = 11;
    bool expectedResult = true;
    auto result = isPalindrome(input);
    EXPECT_EQ(result, expectedResult);
}

/*
Input: x = 1122
Output: true
*/
TEST(IsPalindromeTest, TestExample5)
{
    int input = 1122;
    bool expectedResult = false;
    auto result = isPalindrome(input);
    EXPECT_EQ(result, expectedResult);
}