#include<vector>
#include<sstream>
#include"is_palindrome.h"

using namespace std;


bool isPalindrome(int x) 
{
    if(x < 0)
    {
        return false;
    }
    else
    {
        stringstream stream;
        stream << x;
        auto numberAsString = stream.str();
        for(int i = 0; i < numberAsString.length() / 2; ++i)
        {
            if(numberAsString[i] != numberAsString[numberAsString.length() - i - 1])
                return false;
        }
    }
    return true;
}