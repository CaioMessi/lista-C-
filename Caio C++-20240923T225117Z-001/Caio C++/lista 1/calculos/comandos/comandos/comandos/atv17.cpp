#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale(LC_ALL, "");
	
	char assinante, serie;
	
	cout << "Voc� assina a Netflix ?: ";
	cin >> assinante;
	
	switch (assinante){
		case 'S':
			cout << "Voc� j� assistiu Stranger Things? : ";
			cin >> serie;
			switch (serie){
				case 'S':
					cout << "Assista a nova temporada !!";
					break;
				case 'N':
					cout << "Assista as outras temporadas antes.";
					break;
			}
			break;
		case 'N': 
			cout << "Procure outras s�ries para assistir em outros streamings ou assine a Netflix";
			break;	
	}
	return 0;
}
