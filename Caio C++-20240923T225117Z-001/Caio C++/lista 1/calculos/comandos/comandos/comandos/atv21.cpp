#include <iostream>
#include <locale>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "");
	char compra;
	cout << "Você deseja comprar algo? : ";
	cin >> compra;
	
	if (compra == 'S' || compra == 'Sim'){
		cout << "Obrigado pela compra !! Volte sempre";
	}else if (compra == 'N' || compra == 'Nao'){
		cout << "Volte sempre!! ";
	}
	return 0;
}
