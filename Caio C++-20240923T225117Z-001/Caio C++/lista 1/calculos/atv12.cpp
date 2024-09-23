# include <iostream> 
# include <locale> 
# include <math.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "portuguese");
	 double peso , altura;
	 
	 cout << "Insira seu peso: ";
	 cin >> peso;
	 cout << "Insira sua altura: ";
	 cin >> altura;
	 
	 double imc = peso / pow (altura , 2);
	 cout << "O seu imc é: " << imc;
	 return 0;
}
