#ifndef INDEX_OF_FIRST_OCCURRENCE_H
#define INDEX_OF_FIRST_OCCURRENCE_H
#include<string>
using namespace std;

/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
*/
int strStr(string haystack, string needle);

#endif