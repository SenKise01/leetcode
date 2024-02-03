#include<stack>
#include"valid_parentheses.h"

bool isValid(string s)
{
    stack<char> parenthesisStack;
    for(auto c : s)
    {
        if(c == '(' || c == '[' || c == '{')
        {
        parenthesisStack.push(c);
        }
        else
        {
            if(parenthesisStack.empty())
            {
                return false;
            }
            
            if(c == ')' && parenthesisStack.top() == '(')
                parenthesisStack.pop();
            else if(c == ']' && parenthesisStack.top() == '[')
                parenthesisStack.pop();
            else if(c == '}' && parenthesisStack.top() == '{')
                parenthesisStack.pop();
            else
                return false;
        }
  }
  return parenthesisStack.empty();
}