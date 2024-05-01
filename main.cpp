#include <iostream>
using namespace std;

int main() {
    int A;
    cout << "Enter A: ";
    cin >> A;
    cout << "Numbers B satisfying the conditions for A are:" << endl;
    for (int B = 1; B <= A; B++) {
        if (A % B == 0) {
            cout << B << " ";
        }
    }
    return 0;
}