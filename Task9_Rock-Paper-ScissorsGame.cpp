// Task9_Rock-Paper-ScissorsGame
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char Task9_RockPaperScissorsGame(char uChoice, char cChoice)
    {
        char winner = 'b';
        if (uChoice == 'r' && cChoice == 'p')
        {
            cout << "\tComputer Wins! Paper wraps Rock." << endl;
            winner = 'c';
        }
        else if (uChoice == 'p' && cChoice == 's')
        {
            cout << "\tComputer Wins! Scissors cut Paper." << endl;
            winner = 'c';
        }
        else if (uChoice == 's' && cChoice == 'r')
        {
            cout << "\tComputer Wins! Rock smashes Scissors." << endl;
            winner = 'c';
        }
        else if (uChoice == 'r' && cChoice == 's')
        {
            cout << "\tYou Win! Rock smashes Scissors." << endl;
            winner = 'u';
        }
        else if (uChoice == 'p' && cChoice == 'r')
        {
            cout << "\tYou Win! Paper wraps Rock." << endl;
            winner = 'u';
        }
        else if (uChoice == 's' && cChoice == 'p')
        {
            cout << "\tYou Win! Scissors cut Paper." << endl;
            winner = 'u';
        }
        else
        {
            cout << "\tTie. Play again win the Game." << endl;
            winner = 'b';
        }
        return winner;
    }

    char getComputerOption()
    {
        srand(time(NULL));
        int num = rand() % 3 + 1;

        if (num == 1)
            return 'r';
        if (num == 2)
            return 'p';
        if (num == 3)
            return 's';
    }

    char getUserOption()
    {
        char c;
        cout << "\n\nRock, Paper and Scissors Game!" << endl;
        cout << "Choose one of the following options" << endl;
        cout << "-----------------------------------" << endl;
        cout << "(r) for Rock \n"
             << "(p) for Paper\n"
             << "(s) for Scissors\n"
             << "(q) for quit Game\n";
        cin >> c;

        while (c != 'r' && c != 'p' && c != 's' && c != 'q')
        {
            cout << "Please enter one of the following options only. " << endl;
            cout << "(r) for Rock \n"
                 << "(p) for Paper\n"
                 << "(s) for Scissors\n"
                 << "(q) for quit Game\n";
            cin >> c;
        }

        return c;
    }

    void showSelectedOption(char option)
    {
        if (option == 'r')
            cout << "Rock" << endl;
        if (option == 'p')
            cout << "Paper" << endl;
        if (option == 's')
            cout << "Scissors" << endl;
    }
};

int main()
{
    Solution ans;
    char userChoice, computerChoice, winner;
    int userPoint = 0, computerPoint = 0;
    while (true)
    {
        userChoice = ans.getUserOption();
        if (userChoice == 'q')
        {
            cout << "\n\tYou Chose to quit the game.\n";
            break;
        }
        cout << "\n\tYour choice is: ";
        ans.showSelectedOption(userChoice);
        computerChoice = ans.getComputerOption();
        cout << "\tComputer choice is: ";
        ans.showSelectedOption(computerChoice);
        winner = ans.Task9_RockPaperScissorsGame(userChoice, computerChoice);
        if (winner == 'u')
            userPoint++;
        else if (winner == 'c')
            computerPoint++;
        cout << "\nScore: " << "User -> " << userPoint << " | " << computerPoint << " <- Computer\n";
    }
    return 0;
}