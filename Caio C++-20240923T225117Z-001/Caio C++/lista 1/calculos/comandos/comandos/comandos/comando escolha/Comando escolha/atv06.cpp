#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	char camisas;
	
	cout << "Escolha um tamanho de camisa: " << "\n";
	cout << "P - Pequeno" << "\n";
	cout << "M - M�dio" << "\n";
	cout << "G - Grande" << "\n";
	
	cin >> camisas;
	
	switch (camisas){
		case 'P':
			cout << "A camisa tamanho P custa 25.00 R$";
		break;
		case 'M':
			cout << "A camisa tamanho M custa 40.00 R$";
		break;
		case 'G':
			cout << "A camisa tamanho G custa 70.00 R$";
		break;
	}
	return 0;
}
