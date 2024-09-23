#include <iostream>

using namespace std;

int main (){
    int x,y;
    cout << "Insira o primeiro valor: ";
    cin >> x;
    cout << "Insira o segundo valor: ";
    cin >> y;

    if (x > y){
        cout << x << " e maior que " << y;
    }else{
        cout << x << " e menor que " << y;
    }
    return 0;
}