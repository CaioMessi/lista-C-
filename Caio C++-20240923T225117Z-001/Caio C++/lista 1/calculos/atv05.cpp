# include <iostream>
# include <cmath> 
# include <locale> 

using namespace std;

int main (){
	setlocale (LC_ALL, "portuguese");
	
	int x;
	cout << "Insira um número: ";
	cin >> x;
	cout << sqrt (x);
	cout << "A raíz quadrada do valor digitado é: " << sqrt(x) << "\n";
	return 0;
	
}
