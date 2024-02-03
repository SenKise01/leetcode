#include <gtest/gtest.h>
#include"../merge_two_sorted_lists.h"

/*
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
*/
TEST(MergeTwoSortedListsTests, TestExample1)
{
    ListNode list13(4);
    ListNode list12(2, &list13);
    ListNode list11(1, &list12);
    ListNode list23(4);
    ListNode list22(3, &list23);
    ListNode list21(1, &list22);

    ListNode* resultList1 = &list11;
    ListNode* resultList2 = &list21;
    ListNode* resultList3 = &list12;
    ListNode* resultList4 = &list22;
    ListNode* resultList5 = &list13;
    ListNode* resultList6 = &list23;

    auto result = mergeTwoLists(&list11, &list21);

    EXPECT_EQ(result, resultList1);
    result = result->next;
    EXPECT_EQ(result, resultList2);
    result = result->next;
    EXPECT_EQ(result, resultList3);
    result = result->next;
    EXPECT_EQ(result, resultList4);
    result = result->next;
    EXPECT_EQ(result, resultList5);
    result = result->next;
    EXPECT_EQ(result, resultList6);
}

/*
Input: list1 = [], list2 = []
Output: []
*/
TEST(MergeTwoSortedListsTests, TestExample2)
{
    ListNode* list1 = nullptr;
    ListNode* list2 = nullptr;

    auto result = mergeTwoLists(list1, list2);
    EXPECT_EQ(result, nullptr);

}

/*
Input: list1 = [], list2 = [0]
Output: [0]
*/
TEST(MergeTwoSortedListsTests, TestExample3)
{
    ListNode* list1 = nullptr;
    ListNode list2(0);
    ListNode* resultList = &list2;

    auto result = mergeTwoLists(list1, &list2);
    EXPECT_EQ(&list2, result);
}