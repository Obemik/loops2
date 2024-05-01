#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, temp, counter = 0;
    cout << "Enter a number: ";
    cin >> number;
    int result_digit = 0, digit;
    int my_pow = 1;
    temp = number;
    for (; temp;) {
        digit = temp % 10;
        if (digit != 3 && digit != 6) {
            result_digit += digit * my_pow;
            my_pow *= 10;
        }
        temp /= 10;
    }
    cout << "Result: " << result_digit << endl;
    return 0;
}
