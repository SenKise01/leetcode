#ifndef LONGEST_COMMON_PREFIX_H
#define LONGEST_COMMON_PREFIX_H
#include<vector>
using namespace std;

/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where 
it would be if it were inserted in order. You must write an algorithm with O(log n) runtime complexity.

Example:
Input: nums = [1,3,5,6], target = 5
Output: 2
*/
int searchInsert(vector<int>& nums, int target);

#endif