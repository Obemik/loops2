#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A;
    cout << "Enter A: ";
    cin >> A;
    int sum = 0;
    for (int num = A; num != 0; num /= 10) {
        sum += num % 10;
    }
    if (pow(sum, 3) == pow(A, 2)) {
        cout << "The cube of the sum of digits of " << A << " is equal to " << A << "*A." << endl;
    }
    else {
        cout << "The cube of the sum of digits of " << A << " is not equal to " << A << "*A." << endl;
    }
    return 0;
}
