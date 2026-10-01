#include <iostream>
using namespace std;

long factorial(long n) {
    for (long i = n; i > 1; i--) {
        n *= (i - 1);
    }

    return n;
}

int main() {
    cout.setf(ios::fixed);
    cout <<"Give a number to calculate its factorial: ";
    long n;
    cin >> n;
    cout << "The factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}