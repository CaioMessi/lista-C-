#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	char clube;
	
	cout << "Você é um membro inativo de um clube? : ";
	cin >> clube;
	
	if (clube == 'S' || clube == 's'|| clube == 'Sim' || clube == 'sim'){
		cout << "Por favor, atualize sua inscrição para continuar desfrutando dos benefícios do clube !!";
	}else if (clube == 'N'|| clube == 'n'|| clube == 'Nao' || clube == 'nao'){
		cout << "Continue aproveitando seus benefícios !!";
	}
	return 0;
}
