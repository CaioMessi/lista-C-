#include <iostream>
# include <locale>
# include <iomanip>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	double x;
	cout << "Insira um n�mero: ";
	cin >> x;
	double metade = x / 2;
	cout << "A metade do n�mero digitado �: " << fixed << setprecision (2) << metade;
	return 0;
	
}
