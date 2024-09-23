#include <iostream>
#include <locale>

using namespace std;

int main (){
	int x;
	cout << "Insira um valor: ";
	cin >> x;
	
	if (x < 0){
		cout << "Negativo";
	} else {
		cout << "Positivo";
	}
	return 0;
}
