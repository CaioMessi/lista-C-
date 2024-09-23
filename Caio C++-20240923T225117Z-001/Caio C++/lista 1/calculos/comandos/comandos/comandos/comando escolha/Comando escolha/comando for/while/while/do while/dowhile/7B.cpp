#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num , tabuada;
	int i = 0;
	
	cout <<"Insira um número: " << endl;
	cin >> num;
	
	do{
		i++;
		tabuada = (num * i);
		
		cout << num << " X " << i << " = " << tabuada << endl;
		
	}
	while (i < 10);
	return 0;
}
