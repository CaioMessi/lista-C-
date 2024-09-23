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
		cout << "Você é maior de idade ! Possui habilitação ? ";
		cin >> habilitacao;
		switch (habilitacao){
			case 'S':
				cout << "Parabéns, você pode dirigir";
				break;
			case 'N':
				cout << "Você não pode dirigir";
				break;
				
		}
	}else{
		cout << "Você é menor de idade, não tem permissão para dirigir ! Volta pro roblox";
	}
	return 0;
	

}
