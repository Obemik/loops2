#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int num = 100; num <= 999; num++) {
        int digits[10] = { 0 };
        int temp = num;
        bool allUnique = true;
        for (int i = 0; i < 3; i++) {
            int digit = temp % 10;
            digits[digit]++;
            temp /= 10;
        }
        for (int i = 0; i < 10; i++) {
            if (digits[i] > 1) {
                allUnique = false;
                break;
            }
        }
        if (allUnique) {
            count++;
        }
    }
    cout << "Number of integers in the range from 100 to 999 with all unique digits: " << count << endl;
    return 0;
}
