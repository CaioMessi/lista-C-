#include <iostream>

using namespace std;

int main (){
    int valor;
    int x;
    cout << "Insira o valor de um produto: ";
    cin >> valor;
     cout << "Insira o valor de desconto desejado: ";
    cin >> x;
    int desconto = valor * x/100;
    int valorfinal = valor - desconto;
    cout<< "O valor final e: " << valorfinal;
    return 0;
}