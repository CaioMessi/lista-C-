#include <iostream>
#include <string>

using namespace std;

int main(){
	setlocale (LC_ALL, "");
	
	string palavra;
	cout << "Insira uma palavra: ";
	cin >> palavra;
	
	if (palavra.empty ()){
		cout << "A palavra está vazia: " << palavra;
	}else{
		cout <<"A palavra não está vazia" ;
	}
	return 0;
}
