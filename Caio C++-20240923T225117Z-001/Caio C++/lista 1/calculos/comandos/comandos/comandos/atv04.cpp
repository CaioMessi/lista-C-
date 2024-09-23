#include <iostream>

using namespace std;

int main (){
    int x, y, z;
    cout << "Insira o primeiro valor: ";
    cin >> x;
    cout << "Insira o segundo valor: ";
    cin >> y;
    cout << "Insira o terceiro valor: ";
    cin >> z;

    if (x < y && x > z){
        cout << x << " e menor que " << y << " e maior que " << z;
    }
    return 0;
    
}