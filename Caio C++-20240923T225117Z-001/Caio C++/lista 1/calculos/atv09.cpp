# include <iostream> 
# include <locale> 

using namespace std;

int main (){
	setlocale (LC_ALL, "portuguese");
	
	int x;
	cout << "Insira um valor: ";
	cin >> x;
	int result = x % 2;
	cout << "O valor do resto da divis�o por 2 �: " << result;
	return 0;
	

}
