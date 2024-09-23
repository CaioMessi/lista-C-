#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	char cafe, adicionais;
	
	cout << "Você quer café? : ";
	cin >> cafe;
	
	
	switch(cafe){
	
		case 'N':
			cout << "Tudo bem, volte quando quiser um café";
			break;
		case 'S':
			cout << "Você deseja adicionar açúcar ou leite? : ";
			cin >> adicionais;
			switch (adicionais){
				case 'S':
					cout << "Um café com adicionais saindo";
					break;
				case 'N':
					cout << "Um café puro saindo";
				break;
			}
	break;
	}
	return 0;
	
}
