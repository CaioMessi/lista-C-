# include <iostream>
# include <string>
# include <locale>
using namespace std;

int main (){
	setlocale ( LC_ALL, "portuguese" );
	string palavra;
	do{
		
		cout << "Digite Verdadeiro ou Falso: ";
		cin >> palavra;
		cout << "A palavra digitada �: " << palavra <<"\n\n";	
	}
	while (palavra != "Verdadeiro" && palavra != "Falso");
	cout << "Parab�ns!!! Voc� acertou"<<"\n\n";


	
}
