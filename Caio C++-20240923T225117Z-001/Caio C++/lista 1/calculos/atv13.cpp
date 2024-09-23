#include <iostream>

using namespace std;

int main (){
    int celsius;
    cout << "Insira a temperatura em Celsius: ";
    cin >> celsius;
    int fahrenheit = (celsius * 1.8) + 32;
    cout << "\n";
    cout << "A temperatura em fahrenheit e: " << fahrenheit;
    return 0;
}