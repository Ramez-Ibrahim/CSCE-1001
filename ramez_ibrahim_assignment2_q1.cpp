#include <iostream>
using namespace std;

void getUnitsPrice (float& units, float& price) {
    cout << "What is the number of units purchased? ";
    cin >> units;
    cout << "What is the price per unit? ";
    cin >> price;

}

float totals(float units, float price) {
    float total;
    if (units < 50) {
        total = units * price;
    }
    else {
        float fifty = units - 50;
        total = (50 * price) + (fifty * price * 1.5);
    }

    return total;
}

void printReceipt(float units, float price, float total) {
    cout << "Number of units: " << units << endl;
    cout << "Price per unit: " << price << endl;
    cout << "Total: " << total << endl;
}

int main() {
    float units, price;
    getUnitsPrice(units, price);
    float total;
    total = totals(units, price);
    printReceipt(units, price, total);
    return 0;
}