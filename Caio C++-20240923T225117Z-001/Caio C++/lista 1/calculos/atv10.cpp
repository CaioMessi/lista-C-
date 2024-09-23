# include <iostream> 
# include <locale> 

using namespace std;

int main (){
	setlocale (LC_ALL, "portuguese");
	 int x , y;
	 cout << "Insira o dividendo: ";
	 cin >> x;
	 cout << "Insira o divisor: ";
	 cin >> y;
	 
	 int div = (x / y);
	 int resto = (x % y);
	 int result = (div + resto);
	 cout << "A divisão inteira é: " << result;
	 return 0;
}
