#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	char operacao;
	
	cout << "Deseja cancelar � opera��o? : ";
	cin >> operacao;
	
	if (operacao == 'S' || operacao == 'Sim' || operacao == 's' || operacao == 'sim'){
		cout << "Opera��o Cancelada";
	}else if (operacao == 'N' || operacao == 'Nao' || operacao == 'n' || operacao == 'nao') {
		cout << "Por favor, confirme o cancelamento da opera��o";
	}
	return 0;
}
