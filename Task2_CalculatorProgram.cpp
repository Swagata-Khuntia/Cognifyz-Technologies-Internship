// Task2_CalculatorProgram
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int Task2_CalculatorProgram(int a, char b, int c)
    {
        switch (b)
        {
        case '+':
            cout << a << " + " << c << " = ";
            return a + c;
            break;
        case '-':
            cout << a << " - " << c << " = ";
            return a - c;
            break;
        case '*':
            cout << a << " * " << c << " = ";
            return a * c;
            break;
        case '/':
            cout << a << " / " << c << " = ";
            return a / c;
            break;
        case '%':
            cout << a << " % " << c << " = ";
            return a % c;
            break;
        default:
            cout << "Unknown operator (Use one of these -> '+, -, *, /, %')";
            break;
        }
    }
};

int main()
{
    int inputValue1, inputValue2;
    char inputOperator;
    cout << "Enter First Number: ";
    cin >> inputValue1;
    cout << "Enter Second Number: ";
    cin >> inputValue2;
    cout << "Enter an Operator (+, -, *, /, %): ";
    cin >> inputOperator;
    Solution ans;
    cout << ans.Task2_CalculatorProgram(inputValue1, inputOperator, inputValue2);
    return 0;
}