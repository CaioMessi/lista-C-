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
	
	if (x - y < 10 || x - y == 0){
		cout << "A diferença entre os valores é menor ou igual a 10";
	}else{
		cout << "A diferença entre os valores é maior que 10";
	}
}
