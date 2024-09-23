#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	
	int num;
	
	cout << "Insira um valor: ";
	cin >> num;
	
	if (num > 0 || num < 0){
		cout << num << " é diferente de zero";
	}else {
		cout << num << " é igual à zero";
	}
	return 0;
	
}
