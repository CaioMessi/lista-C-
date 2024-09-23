# include <iostream> 
# include <locale>
# include <cmath>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "portuguese");
	
	int x;
	cout << "Insira um valor: ";
	cin >> x;
	cout << abs(x);
	cout << "O valor absoluto é: " << abs (x);
	return 0;
	
}
