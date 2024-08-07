// Task7_StudentGradeCalculator
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char Task7_StudentGradeCalculator(float mark)
    {
        if (mark >= 91 && mark <= 100)
        {
            return 'O';
        }
        else if (mark >= 81 && mark < 91)
        {
            return 'E';
        }
        else if (mark >= 71 && mark < 81)
        {
            return 'A';
        }
        else if (mark >= 61 && mark < 71)
        {
            return 'B';
        }
        else if (mark >= 51 && mark < 61)
        {
            return 'C';
        }
        else if (mark >= 41 && mark < 51)
        {
            return 'D';
        }
        else if (mark >= 0 && mark < 41)
        {
            return 'F';
        }
        return 'X';
    }
};

int main()
{
    vector<float> marksForGrading;
    float inputValue = 0, totalMarks = 0;
    cout << "Please input all subject marks as space-separated numbers, then press <Enter>: ";
    while (cin && cin.peek() != '\n')
    {
        cin >> inputValue;
        marksForGrading.push_back(inputValue);
        totalMarks += inputValue;
    }
    Solution ans;
    for (int i = 0; i < marksForGrading.size(); i++)
    {
        cout << "Subject " << i + 1 << ": " << marksForGrading[i] << " - " << ans.Task7_StudentGradeCalculator(marksForGrading[i]) << endl;
    }
    cout << endl;
    cout << "Average: " << totalMarks / marksForGrading.size() << " - " << ans.Task7_StudentGradeCalculator(totalMarks / marksForGrading.size()) << endl;
    return 0;
}