# include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	int lado1, lado2, lado3;
	
	cout << "Indique o primeiro lado: ";
	cin >> lado1;
	cout << "Indique o segundo lado: ";
	cin >> lado2;
	cout << "Indique o terceiro lado: ";
	cin >> lado3;
	
	if (lado1 == lado2 && lado1 == lado3){
		cout << "Tri�ngulo Equil�tero";
	}else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
		cout << "Tri�ngulo Is�sceles";
	}else{
		cout << "Tri�ngulo Escaleno";
	}
}
