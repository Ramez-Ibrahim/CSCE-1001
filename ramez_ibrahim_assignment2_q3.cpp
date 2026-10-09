#include <iostream>
using namespace std;

int DecToBase(int num, int base) {
    int remainder;
    int result = 0;
    int place = 1;
    do {
        remainder = num % base;
        result += (remainder * place);
        place *= 10;
        num /= base;
    } while(num != 0);
    return result; 
}

int main() {
    int num, base, result;
    do {
        cout << "Enter a number: ";
        cin >> num;
    } while (num <= 0);
    do {
        cout << "Enter a base: ";
        cin >> base;
    } while (base < 2 || base > 9);
    result = DecToBase(num, base);
    cout << "Conversion: " << result << endl;
}