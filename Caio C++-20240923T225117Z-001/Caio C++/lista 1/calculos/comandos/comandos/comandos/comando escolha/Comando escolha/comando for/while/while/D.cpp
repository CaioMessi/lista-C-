#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int i = 3;
	string senhacorreta = "Batata";
	string senha;
	
	while (i >= 0){
		cout << "Insira uma senha: " << endl;
		cin >> senha;
		
		if (senha == senhacorreta){
			cout << "Senha Correta!!";
			i = 4;
		}else{
			cout << "Senha Incorreta !! Você tem " << i << " tentativas" << endl;
		}
		i--;
		
	}
	return 0;
}
