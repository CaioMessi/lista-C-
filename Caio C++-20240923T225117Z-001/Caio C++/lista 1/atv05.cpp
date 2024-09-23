#include <iostream>
#include <locale>
# include <iomanip>

using namespace std;
	
int main (){
	double valor;
	cout << "Digite um valor: ";
	cin >> valor;
	cout <<"Valor digitado: " << valor << "\n";
	cout << "Valor digitado: " << fixed << setprecision (5) << valor;
	
}
