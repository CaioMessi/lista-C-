# include <iostream>
# include <cmath> 
# include <locale> 

using namespace std;

int main (){
	setlocale (LC_ALL, "portuguese");
	
	int x;
	cout << "Insira um n�mero: ";
	cin >> x;
	cout << sqrt (x);
	cout << "A ra�z quadrada do valor digitado �: " << sqrt(x) << "\n";
	return 0;
	
}
