#include <iostream>

using namespace std;

int main (){
    int x , y;
    cout << "Insira o primeiro valor: ";
    cin >> x;
    cout << "Insira o segundo valor: ";
    cin >> y;

    if (x == y){
        cout << x << " e " << y << " sao iguais";
    }else{
        cout << x << " e " << y << " sao diferentes";
    }
    return 0;
}