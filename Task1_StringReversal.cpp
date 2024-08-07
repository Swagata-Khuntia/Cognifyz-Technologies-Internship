// Task1_StringReversal
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string Task1_StringReversal(string str)
    {
        for (int i = 0; i < str.size() / 2; i++)
            swap(str[i], str[str.size() - i - 1]);
        return str;
    }
};

int main()
{
    string strForReversal;
    cout << "Enter a string: ";
    getline(cin, strForReversal);
    Solution ans;
    cout << "Reversed string: ";
    cout << ans.Task1_StringReversal(strForReversal);
    return 0;
}