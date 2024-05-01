#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;
    cout << "Numbers B satisfying the conditions for A are:" << endl;
    for (int i = 1; i <= A; i++) {
        if (A % i == 0 && B % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}