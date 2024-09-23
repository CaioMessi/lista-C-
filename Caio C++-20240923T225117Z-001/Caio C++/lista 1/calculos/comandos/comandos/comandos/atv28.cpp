#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	char operacao;
	
	cout << "Deseja cancelar à operação? : ";
	cin >> operacao;
	
	if (operacao == 'S' || operacao == 'Sim' || operacao == 's' || operacao == 'sim'){
		cout << "Operação Cancelada";
	}else if (operacao == 'N' || operacao == 'Nao' || operacao == 'n' || operacao == 'nao') {
		cout << "Por favor, confirme o cancelamento da operação";
	}
	return 0;
}
