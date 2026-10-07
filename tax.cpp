#include <iostream>
using namespace std;

void addTax(double taxRate, double&cost) {
    double tax = (taxRate / 100) + 1;
    cost *= tax;

}

int main() {
    double cost;
    cost = 10;
    addTax(14, cost);
    cout << cost;
    return 0;
}