#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main (){
	setlocale (LC_ALL, "");
	string name;
	
	cout << "Insira um nome: ";
	cin >> name;
	
	if (name == "Wilson" || name == "Gloria"){
		cout << "Bem vindo (a) de volta " << name;
	}
	
	return 0;
	
}
