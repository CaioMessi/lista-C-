#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	char cafe, adicionais;
	
	cout << "Voc� quer caf�? : ";
	cin >> cafe;
	
	
	switch(cafe){
	
		case 'N':
			cout << "Tudo bem, volte quando quiser um caf�";
			break;
		case 'S':
			cout << "Voc� deseja adicionar a��car ou leite? : ";
			cin >> adicionais;
			switch (adicionais){
				case 'S':
					cout << "Um caf� com adicionais saindo";
					break;
				case 'N':
					cout << "Um caf� puro saindo";
				break;
			}
	break;
	}
	return 0;
	
}
