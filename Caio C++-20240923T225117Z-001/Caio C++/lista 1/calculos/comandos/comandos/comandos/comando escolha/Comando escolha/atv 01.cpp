#include <iostream>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	char hora;
	
	cout << "Escolha uma das opções abaixo: " << "\n";
	cout << "1 - Manhã" << "\n";
	cout << "2 - Tarde"<< "\n";
	cout << "3 - Noite" << "\n";
	
	cin >> hora;
	
	switch (hora){
		case '1':
			cout << "Manhã";
		break ;
		case '2':
			cout << "Tarde";
		break;
		case '3':
			cout << "Noite";
		break;
	}
	return 0;
	
}
