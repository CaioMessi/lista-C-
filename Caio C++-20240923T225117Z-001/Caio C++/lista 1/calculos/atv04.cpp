#include <iostream>
# include <iomanip>
# include <locale>

using namespace std;

int main (){
	
	setlocale(LC_ALL , "portuguese");
	double x , y;
	cout << "Insira um valor: ";
	cin >> x;
	cout << "Insira um valor: ";
	cin >> y;
	int div = (x / y);
	cout << "\n";
	cout << "O resultado da divisão é: " << div;
	return 0;
}
