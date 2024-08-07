// Task6_PalindromeChecker
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool Task6_PalindromeChecker(string str)
    {
        for (int i = 0; i < str.size() / 2; i++)
            if (str[i] != str[str.size() - i - 1])
                return false;
        return true;
    }
};

int main()
{
    string strForPalindromeCheck;
    cout << "Enter a string: ";
    getline(cin, strForPalindromeCheck);
    Solution ans;
    cout << "Palindrome Check: ";
    ans.Task6_PalindromeChecker(strForPalindromeCheck) ? cout << "True" : cout << "False";
    return 0;
}