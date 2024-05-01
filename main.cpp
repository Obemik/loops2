#include <iostream>
using namespace std;

int main() {
    int A;
    cout << "Enter A: ";
    cin >> A;
    cout << "Numbers B satisfying the conditions for A are:" << endl;
    for (int B = 2; B <= A / B; B++) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << " ";
        }
    }
    return 0;
}