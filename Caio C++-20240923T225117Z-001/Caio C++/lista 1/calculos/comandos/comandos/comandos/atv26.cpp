#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	char clube;
	
	cout << "Voc� � um membro inativo de um clube? : ";
	cin >> clube;
	
	if (clube == 'S' || clube == 's'|| clube == 'Sim' || clube == 'sim'){
		cout << "Por favor, atualize sua inscri��o para continuar desfrutando dos benef�cios do clube !!";
	}else if (clube == 'N'|| clube == 'n'|| clube == 'Nao' || clube == 'nao'){
		cout << "Continue aproveitando seus benef�cios !!";
	}
	return 0;
}
