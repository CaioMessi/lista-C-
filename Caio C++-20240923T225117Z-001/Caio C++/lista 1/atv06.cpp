# include <iostream>
# include <string>
# include <locale>

using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	string nome;
	cout << "Digite seu nome: ";
	cout <<"\n";
	cin >> nome;
	
	int idade;
	cout << "Digite sua idade: ";
	cin >> idade;
	cout << "Seu nome é " << nome << " e sua idade " << idade << " ano(s) " << "\n";
}
