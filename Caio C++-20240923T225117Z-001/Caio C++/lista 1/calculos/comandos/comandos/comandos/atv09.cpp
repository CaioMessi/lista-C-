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
	
	if (x < y){
		cout << x << " � menor que " << y;
	}else if (x == y) {
		cout << x << " e " << y << " s�o iguais";
	}else {
		cout << x << " � maior que " << y;
	}
	return 0;
}
