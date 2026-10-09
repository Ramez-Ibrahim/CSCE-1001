#include <iostream>
using namespace std;

bool ContainsDigit(int number, int digit) {
    do {
        float check = number % 10;
        if (check == digit) {
            return true;
        }
        number /= 10;
    } while(number != 0);
    return false;
}

int countDigit(int number, int digit) {
    int count = 0;
    do {
        float check = number % 10;
        if (check == digit) {
            count++;
        }
        number /= 10;
    } while(number != 0);
    return count;
}

int main() {
    int number, digit, count;
    bool contains;
    cout << "Enter Number: ";
    cin >> number;
    cout << "Enter Digit: ";
    cin >> digit;
    contains = ContainsDigit(number, digit);
    // I used Google to know how to make the bool return true or false rather than 0 and 1 because I did'nt like its look which is how I found boolalpha
    cout << "Contains Digit: " << boolalpha << contains;
    if (contains == true) {
        count = countDigit(number, digit);
        cout << ", Count of Digit: " << count << endl;
    }
    else {
        cout << endl;
    }
}