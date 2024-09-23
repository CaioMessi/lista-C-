# include <iostream>
# include <locale>
# include <string>

using namespace std;

int main(){
	setlocale (LC_ALL, "portuguese");
	string name;
	cout << "Digite um nome: " << "\n";
	getline (cin,name);
	cout << "Seu nome é: " << name <<"\n";
	
}

