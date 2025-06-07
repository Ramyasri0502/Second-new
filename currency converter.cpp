#include <iostream>
#include <iomanip>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\nCurrency Converter Menu:\n";
    cout << "1. USD to INR\n";
    cout << "2. INR to USD\n";
    cout << "3. EUR to USD\n";
    cout << "4. USD to EUR\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double amount, converted;

    const double USD_TO_INR = 83.0;
    const double INR_TO_USD = 1 / USD_TO_INR;
    const double EUR_TO_USD = 1.08;
    const double USD_TO_EUR = 1 / EUR_TO_USD;

    cout << fixed << setprecision(2);

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount in USD: ";
                cin >> amount;
                converted = amount * USD_TO_INR;
                cout << "Equivalent in INR: ₹" << converted << endl;
                break;

            case 2:
                cout << "Enter amount in INR: ";
                cin >> amount;
                converted = amount * INR_TO_USD;
                cout << "Equivalent in USD: $" << converted << endl;
                break;

            case 3:
                cout << "Enter amount in EUR: ";
                cin >> amount;
                converted = amount * EUR_TO_USD;
                cout << "Equivalent in USD: $" << converted << endl;
                break;

            case 4:
                cout << "Enter amount in USD: ";
                cin >> amount;
                converted = amount * USD_TO_EUR;
                cout << "Equivalent in EUR: €" << converted << endl;
                break;

            case 5:
                cout << "Thank you for using the Currency Converter!" << endl;
                break;

            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }

    } while (choice != 5);

    return 0;
}

