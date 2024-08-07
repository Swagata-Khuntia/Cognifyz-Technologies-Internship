// Task3_FibonacciSeries
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int Task3_FibonacciSeries(int n)
    {
        int a = 0, b = 1, c = 0;
        cout << a << " " << b;
        for (int i = 1; i <= n - 2; i++)
        {
            c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
        return 0;
    }
};

int main()
{
    int numberOfTerms;
    cout << "Enter the Number of Terms: ";
    cin >> numberOfTerms;
    Solution ans;
    ans.Task3_FibonacciSeries(numberOfTerms);
    return 0;
}