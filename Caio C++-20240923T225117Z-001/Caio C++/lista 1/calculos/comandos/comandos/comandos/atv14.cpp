#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	int age;
	char habilitacao;
	
	cout << "Insira sua idade: ";
	cin >> age;
	
	
	if (age > 18){
		cout << "Voc� � maior de idade ! Possui habilita��o ? ";
		cin >> habilitacao;
		switch (habilitacao){
			case 'S':
				cout << "Parab�ns, voc� pode dirigir";
				break;
			case 'N':
				cout << "Voc� n�o pode dirigir";
				break;
				
		}
	}else{
		cout << "Voc� � menor de idade, n�o tem permiss�o para dirigir ! Volta pro roblox";
	}
	return 0;
	

}
