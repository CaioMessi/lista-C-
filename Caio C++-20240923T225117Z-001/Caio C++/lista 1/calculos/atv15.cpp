#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main (){
    double raio, area;
    cout << "Insira o valor do raio: ";
    cin >> raio;
    area = 3.14 * pow (raio, 2);
    cout << "A area do circulo e: " << fixed <<setprecision (2) << area;
    return 0;
}