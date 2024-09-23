//Atividade 6 e 7 - números pares e ímpares;

#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "portuguese");
	int x;
	cout << "Insira um valor: ";
	cin >> x;
	 if (x % 2 == 0){
		cout << x << " é par";
	 }else{
	 	cout << x << " é ímpar";
	 }
	 return 0;
	 
}
