#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	char limite;
	
	cout << "Escolha uma das op��es de velocidade abaixo: " << "\n";
	cout << "1 - Baixa" << "\n";
	cout << "2 - M�dia" << "\n";
	cout << "3 - Alta" << "\n";
	cin >> limite;
	
	switch (limite){
		case '1': 
			cout << "O limite de velocidade da via � baixo. M�x: 40 km";
		break;
		case'2':
			cout << "O limite de velocidade da via � m�dio. M�x : 85 km";
		break;
		case '3':
			cout << "O limite de velocidade da via � alto. M�x : 120 km";
		break;
		
	}
	return 0;
	}
