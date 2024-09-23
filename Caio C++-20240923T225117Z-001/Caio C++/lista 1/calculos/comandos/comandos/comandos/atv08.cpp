#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	int ano;
	cout << "Insira um ano: ";
	cin >> ano;
	
	if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
		cout << ano << " é um ano bissexto";
	}else{
		cout << ano << " não é bissexto";
	}
	return 0;
}
