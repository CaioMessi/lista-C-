# include <iostream> 
# include <locale> 

using namespace std;

int main (){
	
	setlocale (LC_ALL, "portuguese");
	
	int a, b ,c;
	
	cout << "Insira o primeiro valor: ";
	cin >> a;
	cout << "Insira o segundo valor: ";
	cin >> b;
	cout << "Insira o terceiro valor: ";
	cin >> c;
	
	int media = (a + b  +c)/3;
	
	cout << "A média dos valores é: " << media;
	return 0;


}
