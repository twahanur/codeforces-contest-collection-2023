#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string pin;
        cin >> pin;

        int seconds = 0;
        int current_digit = 1; // Start at digit 1

        for (char c : pin)
        {
            int target_digit = c - '0'; // Convert char to int
            int clockwise = (current_digit - target_digit + 10) % 10;
            int counterclockwise = (target_digit - current_digit + 10) % 10;

            seconds += min(clockwise, counterclockwise);
            seconds++; // Press the button

            current_digit = target_digit;
        }

        cout << seconds << endl;
    }

    return 0;
}
