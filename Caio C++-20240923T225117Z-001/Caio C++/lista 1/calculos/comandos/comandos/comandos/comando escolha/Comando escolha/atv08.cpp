#include<iostream>

using namespace std;

int main (){
    setlocale(LC_ALL, "");
    char idioma;

    cout << "Escolha um idioma: " << "\n";
    cout << "1 - Portugues" << "\n";
    cout << "2 - Ingles" << "\n";

    cin >> idioma;

    switch (idioma){
        case '1':
            cout << "Seja bem vindo!!";
        break;
        case '2':
            cout << "Welcome !";
        break;
    }

}