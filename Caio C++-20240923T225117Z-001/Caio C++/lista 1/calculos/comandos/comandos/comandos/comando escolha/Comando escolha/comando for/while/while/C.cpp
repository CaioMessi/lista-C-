#include <iostream>
#include <limits>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int numEntries = 10;
	int num;
	int soma;
	int i = 0;
	
	cout << "Insira " << numEntries << " n�meros inteiros : " << endl;
	
	while (i < numEntries){
		cout << "Insira um n�mero: ";
		cin >> num;
		soma = soma + num;
		i++;
	}
	cout << "O resultado da soma �: " << soma;
	return 0;
}
