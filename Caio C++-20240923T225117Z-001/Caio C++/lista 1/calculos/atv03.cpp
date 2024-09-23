#include <iostream>
# include <locale>
# include <iomanip>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	double x;
	cout << "Insira um número: ";
	cin >> x;
	double metade = x / 2;
	cout << "A metade do número digitado é: " << fixed << setprecision (2) << metade;
	return 0;
	
}
