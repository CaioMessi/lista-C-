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
	int result = (x + y);
	cout << "O resultado da soma é: " << result;
	
}
