# include <iostream>
# include <string> 
# include <locale>


using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	string numero,rua,bairro,cidade,estado;
	
	cout << "Digite o número da sua casa: " << numero << "\n";

	getline (cin , numero);
	cout << "Insira o nome da sua rua: " << rua << "\n";
	getline  (cin, rua);

	cout << "Rua: " << rua << "\n";

	cout << "Insira o nome do seu bairro: " << bairro;
	getline (cin, bairro);

	cout << "Bairro: " << bairro << "\n";

	cout << "Insira o nome da cidade: " << cidade;
	getline (cin, cidade);
	
	cout << "Cidade: " << cidade << "\n";

	cout << "Insira o nome do estado: " << estado;
	getline (cin, estado);

	cout << "Estado: " << estado << "\n";
	cout << "\n";
	cout << "O número da casa é " << numero << " o nome da rua é: " << rua << ", que fica localizado no bairro  " << bairro << " na cidade de " << cidade << ", no estado de " << estado;
	
}
