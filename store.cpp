#include<iostream>
using namespace std;

const double low_markup = 0.05;
const double high_markup = 0.1;

void store(double& price, int days) {
    if (days <= 7) {
        price = price + (low_markup * price);
    }
    else {
        price = price + (high_markup * price);
    }
}

int main() {
    double price = 10;
    store(price, 10);
    cout << price << endl;
    return 0;
}