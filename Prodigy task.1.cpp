#include <iostream>
using namespace std;
void convertAndDisplay(double temperature, char originalUnit);

int main() {
    cout << "Enter temperature value: ";
    double temperature;
    cin >> temperature;
    cout << "Enter original unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    char originalUnit;
    cin >> originalUnit;
    convertAndDisplay(temperature, originalUnit);

    return 0;
}
void convertAndDisplay(double temperature, char originalUnit) {
    double celsius, fahrenheit, kelvin;
    switch (originalUnit) {
        case 'F':
            celsius = (temperature - 32) * 5 / 9;
            break;
        case 'K':
            celsius = temperature - 273.15;
            break;
        case 'C':
            celsius = temperature;
            break;
        default:
            cout << "Invalid unit entered. Please use C, F, or K." << endl;
            return;
    }
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;
    cout << "Converted Temperatures:" << endl;
    cout << "Celsius: " << celsius << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
}
