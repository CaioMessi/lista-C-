#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	char robo;
	
	cout << "Você é um robô? : ";
	cin >> robo;
	
	if (robo == 'N' || robo == 'Nao' || robo == 'nao' || robo == 'n'){
		cout << "Prove que você não é um robô !!";
	}else if (robo == 'S' || robo == 'Sim' || robo == 's' || robo == 'sim'){
		cout << "Acesso negado!!! Não é permitida o acesso de máquinas";
	}
	return 0;
	
}
