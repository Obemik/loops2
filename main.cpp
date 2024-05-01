#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int num = 100; num <= 999; num++) {
        int digits[10] = { 0 };
        int temp = num;
        for (int i = 0; i < 3; i++) {
            int digit = temp % 10;
            digits[digit]++;
            temp /= 10;
        }
        bool hasDuplicates = false;
        for (int i = 0; i < 10; i++) {
            if (digits[i] > 1) {
                hasDuplicates = true;
                break;
            }
        }
        if (hasDuplicates) {
            count++;
        }
    }
    cout << "Number of integers in the range from 100 to 999 with two duplicate digits: " << count << endl;
    return 0;
}
