#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "portuguese");
	int x , y;
	cout << "Insira o primeiro valor: ";
	cin >> x;
	cout << "Insira o segundo valor: ";
	cin >> y;
	
	if (x > y){
		cout << x << " é maior que " << y;
	}else if (x == y) {
		cout << x << " e " << y << " são iguais";
	}else {
		cout << y << " é maior que " << x;
	}
	return 0;
}
