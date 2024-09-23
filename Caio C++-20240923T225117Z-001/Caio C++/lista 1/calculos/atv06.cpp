# include <iostream>
# include <locale>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int x , y;
	cout << "Insira um valor: ";
	cin >> x;
	cout << "Insira um valor: ";
	cin >> y;
	int result = (y - x);
	cout << "O resultado da subtração é: " << result << "\n";
	return 0;
	
}
