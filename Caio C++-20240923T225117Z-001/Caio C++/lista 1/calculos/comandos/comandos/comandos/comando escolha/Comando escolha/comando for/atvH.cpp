#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int num, i;
	cout << "Insira um valor: " << endl;
		cin >> num;
	
	for (i = 1; i <= num; i++){
		
		if (num % i == 0){
			cout << i << endl;
		}
	}
	return 0;
}
