#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int r = rand() % 499 + 1;
    int num;
    int a;
    time_t startTime, endTime;
    time(&startTime);
    for (a = 1; ; a++) {
        cout << "Attempt " << a << ": Enter your guess(between 1 and 500): ";
        cin >> num;
        if (num == 0) {
            cout << "You exited the game";
            return 0;
        }

        if (num < r) {
            cout << "The secret number is higher\n";
        }
        else if (num > r) {
            cout << "The secret number is lower\n";
        }
        else {
            time(&endTime);
            double seconds = difftime(endTime, startTime);
            cout << "You guessed the number " << r << " in " << a << " attempts\n";
            cout << "The game took " << seconds << " seconds\n";
            break;
        }
    }
    return 0;
}
