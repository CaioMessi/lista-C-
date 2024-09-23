#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	int x;
	cout << "Insira um valor: ";
	cin >> x;
	int dobro = (x * 2);
	cout << "O dobro do valor digitado é: " << dobro;
	return 0;
}
