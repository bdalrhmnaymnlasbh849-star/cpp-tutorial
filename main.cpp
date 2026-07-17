#include <iostream>
#include <cstdlib>

using namespace std;

double CalculateResult(int &n1, int &n2)
{
    double result = (n1 * n2) / 2;
    return result;
}

int main()
{
    // DRY - Don't Repeat Yourself
    srand(time(0));
    int num1 = rand() % 101; // 20
    int num2 = rand() % 101; // 25
    int numFromUser;
    const int MAX_TRIES = 3;

    cout << "What is The result of (" << num1 << " X " << num2 << ") / 2 : ";
    cin >> numFromUser;

    int i = 0;
    for (; i < MAX_TRIES; ++i)
    {
        if (numFromUser == CalculateResult(num1, num2))
        {
            cout << "Success";
            break;
        }
        else
        {
            cout << "Try Again : ";
            cin >> numFromUser;
        }
    }

    if (i == MAX_TRIES)
    {
        cout << "================================" << endl;
        cout << "Game Over" << endl;
        cout << "The Result is " << CalculateResult(num1, num2) << endl;
        cout << "================================" << endl;
    }
}
