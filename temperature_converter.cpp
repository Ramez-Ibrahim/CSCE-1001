#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);  
    float temperature;  
    cout << "What's the temperature outside (°C):"; 
    cin >> temperature;
    float kelvin = temperature + 273.15;
    float fahrenheit = (temperature * 1.8) + 32;      
    cout << "The temperature is: " << temperature << "°C, " << kelvin <<  "K " << fahrenheit << "°F" << endl;                         
    return 0;
}