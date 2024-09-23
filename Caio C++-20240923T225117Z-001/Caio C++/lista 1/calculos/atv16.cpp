#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main (){
    double area, raio, altura;
    cout << "Insira o raio : ";
    cin >> raio;
    cout << "Insira a altura: ";
    cin >> altura;
    area = 3.14 * altura * pow(raio, 2);
    cout << "A area do cilindro e: " << fixed << setprecision (2) << area;
    return 0;
}
