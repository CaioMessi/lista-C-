#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num;
	
	cout << "Insira um valor entre 0 e 10: ";
	cin >> num;
	
	if (num <= 10 && num >= 0){
		cout << "Número válido";
	}else{
		cout << "Número inválido";
	}
	return 0;
}
