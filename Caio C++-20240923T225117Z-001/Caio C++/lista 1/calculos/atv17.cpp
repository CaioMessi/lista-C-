#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    double n1,n2,n3, p1,p2,p3;

    cout << "Insira a primeira nota: ";
    cin >> n1;
    cout << "Insira a segunda nota: ";
    cin >> n2;
    cout << "Insira a terceira nota: ";
    cin >> n3;

    cout << "Insira o peso da primeira nota: ";
    cin >> p1;
    cout << "Insira o peso da segunda nota: ";
    cin >> p2;
    cout << "Insira o peso da terceira nota: ";
    cin >> p3;

    double media = (n1 * p1) + (n2 * p2) + (n3 + p3) / (p1 + p2 + p3);
    cout << "A media ponderada e: " << fixed << setprecision (3) << media;
    return 0;

}