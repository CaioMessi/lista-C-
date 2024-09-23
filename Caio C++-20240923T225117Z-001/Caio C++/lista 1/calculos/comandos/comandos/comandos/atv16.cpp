#include <iostream>
#include <locale>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	char idade, ensinosuperior;
	
	cout << "Você tem mais de 21 anos? ";
	cin >> idade;
	
	switch (idade){
			case 'S':
				cout << "Você possui um diploma de ensino superior ? ";
				cin >> ensinosuperior;
				switch (ensinosuperior){
				case 'S':
					cout << "Parabéns, você está qualificado para a vaga !!!";
					break;
				case 'N':
					cout << "Que pena você não está qualificado para a vaga.";
					break;
			}
			break;
			
			case 'N':
		cout << "Que pena, você não está qualificado para a vaga. ";
		break; 
	} 
	return 0;
	
}
