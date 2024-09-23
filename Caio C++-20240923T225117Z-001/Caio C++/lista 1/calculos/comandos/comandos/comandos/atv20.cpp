#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num;
	
	cout << "Insira um valor: ";
	cin >> num;
	
	if (num % 3 == 0 || num % 5 == 0){
		cout << "O número inserido é divisível por 3 ou por 5";
	}else{
		cout << "O número não é divisível por 3 nem por 5";
	}
	return 0;
	
}
