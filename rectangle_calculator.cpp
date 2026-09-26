#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(1);
    float length;
    float width;
    cout << "What is the width of the rectangle: ";
    cin >> width;
    cout << "What is the length of the rectangle: ";
    cin >> length;
    float area = length * width;
    float perimeter = (length * 2) + (width * 2);
    cout << "The rectangle has an area of: " << area << " and a perimeter of: " << perimeter << endl;
    return 0;
}