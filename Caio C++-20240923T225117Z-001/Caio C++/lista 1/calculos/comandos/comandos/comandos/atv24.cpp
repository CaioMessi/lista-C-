#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	char robo;
	
	cout << "Voc� � um rob�? : ";
	cin >> robo;
	
	if (robo == 'N' || robo == 'Nao' || robo == 'nao' || robo == 'n'){
		cout << "Prove que voc� n�o � um rob� !!";
	}else if (robo == 'S' || robo == 'Sim' || robo == 's' || robo == 'sim'){
		cout << "Acesso negado!!! N�o � permitida o acesso de m�quinas";
	}
	return 0;
	
}
