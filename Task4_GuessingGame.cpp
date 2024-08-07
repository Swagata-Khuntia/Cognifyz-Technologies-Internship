// Task4_GuessingGame
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int Task4_GuessingGame(int n)
    {
        srand(time(NULL));
        int target = rand() % n + 1, guess, attempts = 0;
        cout << "\nWelcome to the Number Guessing Game!\n";
        cout << "I'm thinking of a number between 1 and " << n << ". Can you guess it?\n";

        do
        {
            cout << "\nEnter your guess: ";
            cin >> guess;
            if (guess > n)
            {
                cout << "Guess within the range!\n";
                continue;
            }
            attempts++;
            if (guess < target)
            {
                cout << "Your guess is too low. Try a higher number.\n";
            }
            else if (guess > target)
            {
                cout << "Your guess is too high. Try a lower number.\n";
            }
            else
            {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            }
        } while (guess != target);

        return 0;
    }
};

int main()
{
    int Limit = 100;
    cout << "Enter the Upper Limit: ";
    cin >> Limit;
    Solution ans;
    ans.Task4_GuessingGame(Limit);
    return 0;
}