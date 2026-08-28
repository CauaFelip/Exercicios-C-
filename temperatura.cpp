#include <iostream>

using namespace std;

int main(){

    float celcius, fahrenheit, kelvin;

    cout << "Conversor de temperatura";
    cout <<"\n";

    cout << "Digite a temperatura em celcius: ";
    cin >> celcius;
    cout <<"\n";

    fahrenheit = (celcius * 9.0 / 5.0) + 32;
    kelvin = celcius + 273.15;

    cout << "\n";
    cout << "Temperatura em fahrenheit: " <<fahrenheit;
    cout <<"\n";
    cout << "Temperatura em kelvin: " <<kelvin;
    

    return 0;
}