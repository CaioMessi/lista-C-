#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int numEntries = 10;
	int num, soma;
	int i = 0;
	
	cout << "Insira " << numEntries << " n�meros positivos" << endl;
	
	do {
		cout << "Insira um valor: " << endl;
		cin >> num;
		soma = soma + num;
		i++;
	}
	while (i < numEntries);
	cout << "O resultado da soaa �: " << soma << endl;
	return 0;
}
