// Task8_ArraySorting
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> Task8_ArraySorting(vector<int> arr)
    {
        int i, j;
        bool swapped;
        for (i = 0; i < arr.size() - 1; i++)
        {
            swapped = false;
            for (j = 0; j < arr.size() - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (swapped == false)
                break;
        }
        return arr;
    }
};

int main()
{
    vector<int> arrayToBeSorted;
    int inputValue;
    cout << "Please input space-separated numbers, then press <Enter>: ";
    while (cin && cin.peek() != '\n')
    {
        cin >> inputValue;
        arrayToBeSorted.push_back(inputValue);
    }
    cout << "You've entered: ";
    for (auto &n : arrayToBeSorted)
    {
        cout << n << " ";
    }
    cout << endl;
    Solution ans;
    arrayToBeSorted = ans.Task8_ArraySorting(arrayToBeSorted);
    cout << "In ascending order: ";
    for (auto &n : arrayToBeSorted)
    {
        cout << n << " ";
    }
    return 0;
}