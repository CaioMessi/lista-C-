#include <iostream>
#include <locale>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	char idade, ensinosuperior;
	
	cout << "Voc� tem mais de 21 anos? ";
	cin >> idade;
	
	switch (idade){
			case 'S':
				cout << "Voc� possui um diploma de ensino superior ? ";
				cin >> ensinosuperior;
				switch (ensinosuperior){
				case 'S':
					cout << "Parab�ns, voc� est� qualificado para a vaga !!!";
					break;
				case 'N':
					cout << "Que pena voc� n�o est� qualificado para a vaga.";
					break;
			}
			break;
			
			case 'N':
		cout << "Que pena, voc� n�o est� qualificado para a vaga. ";
		break; 
	} 
	return 0;
	
}
