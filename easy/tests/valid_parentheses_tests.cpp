#include <gtest/gtest.h>
#include"../valid_parentheses.h"


/*
Input: s = "()"
Output: true
*/
TEST(ValidParenthesesTest, TestExample1)
{
   string input = "()";
   EXPECT_EQ(true,isValid(input));
}

/*
Input: s = "()[]{}"
Output: true
*/
TEST(ValidParenthesesTest, TestExample2)
{
   string input = "()[]{}";
   EXPECT_EQ(true,isValid(input));
}

/*
Input: s = "(]"
Output: false
*/
TEST(ValidParenthesesTest, TestExample3)
{
   string input = "(]";
   EXPECT_EQ(false,isValid(input));
}

/*
Input: s = "(])"
Output: false
*/
TEST(ValidParenthesesTest, TestExample4)
{
   string input = "(])";
   EXPECT_EQ(false,isValid(input));
}