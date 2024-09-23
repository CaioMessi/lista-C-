#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	char carronovo , valor;
	
		cout << "Você deseja comprar um carro novo: ";
		cin >> carronovo;
		
	switch (carronovo){
	
		case 'S':
			cout << "Você tem dinheiro para comprar um carro novo? : ";
					cin >> valor;
					
			switch (valor){
					
					case 'S':
						cout << "Parabéns, você pode comprar um novo carro !!!";
						break;
					case 'N' : 
						cout << "Junte mais dinheiro para comprar um novo carro";
						break;
				}
				break;
		case 'N':
			cout << "Que bom que você está satisfeito com seu carro";
			break;	
		
		}
		return 0;
}
