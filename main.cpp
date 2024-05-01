#include <iostream>
using namespace std;

float usd_to_eur(float num) {
    return num * 0.94;
}
float usd_to_uah(float num) {
    return num * 39.59;
}
float usd_to_jpy(float num) {
    return num * 157.65;
}
float uah_to_eur(float num) {
    return num * 0.024;
}
float uah_to_usd(float num) {
    return num * 0.025;
}
float uah_to_jpy(float num) {
    return num * 3.98;
}
float eur_to_usd(float num) {
    return num * 1.07;
}
float eur_to_uah(float num) {
    return num * 42.28;
}
float eur_to_jpy(float num) {
    return num * 168.37;
}
float jpy_to_usd(float num) {
    return num * 0.0063;
}
float jpy_to_uah(float num) {
    return num * 0.25;
}
float jpy_to_eur(float num) {
    return num * 0.0059;
}

int main() {
    float num;
    int choice;
    for (;;) {
        cout << "\nMenu: " << endl;
        cout << "1. USD to EUR\n2. USD to UAH\n3. USD to JPY\n";
        cout << "4. UAH to EUR\n5. UAH to USD\n6. UAH to JPY\n";
        cout << "7. EUR to USD\n8. EUR to UAH\n9. EUR to JPY\n";
        cout << "10. JPY to USD\n11. JPY to UAH\n12. JPY to EUR\n";
        cout << "13. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 13) {
            cout << "Exiting program...\n";
            break;
        }
        cout << "Enter amount: ";
        cin >> num;
        switch (choice) {
        case 1:
            cout << num << " USD = " << usd_to_eur(num) << " EUR\n";
            break;
        case 2:
            cout << num << " USD = " << usd_to_uah(num) << " UAH\n";
            break;
        case 3:
            cout << num << " USD = " << usd_to_jpy(num) << " JPY\n";
            break;
        case 4:
            cout << num << " UAH = " << uah_to_eur(num) << " EUR\n";
            break;
        case 5:
            cout << num << " UAH = " << uah_to_usd(num) << " USD\n";
            break;
        case 6:
            cout << num << " UAH = " << uah_to_jpy(num) << " JPY\n";
            break;
        case 7:
            cout << num << " EUR = " << eur_to_usd(num) << " USD\n";
            break;
        case 8:
            cout << num << " EUR = " << eur_to_uah(num) << " UAH\n";
            break;
        case 9:
            cout << num << " EUR = " << eur_to_jpy(num) << " JPY\n";
            break;
        case 10:
            cout << num << " JPY = " << jpy_to_usd(num) << " USD\n";
            break;
        case 11:
            cout << num << " JPY = " << jpy_to_uah(num) << " UAH\n";
            break;
        case 12:
            cout << num << " JPY = " << jpy_to_eur(num) << " EUR\n";
            break;
        default:
            cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
    return 0;
}