//Atividade 6 e 7 - n�meros pares e �mpares;

#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "portuguese");
	int x;
	cout << "Insira um valor: ";
	cin >> x;
	 if (x % 2 == 0){
		cout << x << " � par";
	 }else{
	 	cout << x << " � �mpar";
	 }
	 return 0;
	 
}
