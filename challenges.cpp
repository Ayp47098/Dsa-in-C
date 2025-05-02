#include <iostream>
using namespace std;

int main() {
    int quantity;
    double pricePerPack, totalCost, tax, finalCost;

    // Input
    cout << "Enter the number of tea packs: ";
    cin >> quantity;

    cout << "Enter the price per pack: ";
    cin >> pricePerPack;

    // Calculation
    totalCost = quantity * pricePerPack;
    tax = totalCost * 0.10;
    finalCost = totalCost + tax;

    // Output
    cout << "Total cost before tax: $" << totalCost << endl;
    cout << "Tax (10%): $" << tax << endl;
    cout << "Final cost after tax: $" << finalCost << endl;

    return 0;
}
