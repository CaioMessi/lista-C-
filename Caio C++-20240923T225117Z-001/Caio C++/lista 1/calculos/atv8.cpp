# include <iostream> 
# include <locale>

using namespace std;

int main (){
	
	setlocale (LC_ALL , "portuguese");
	
	int x , y;
	cout << "Insira um valor: ";
	cin >> x;
	cout << "Insira um valor: ";
	cin >> y;
	int result = (x * y);
	cout << "O resultado da multiplicação é: " << result;
	return 0;
	
}
