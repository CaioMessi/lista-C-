#include <iostream>
#include <string>

using namespace std;

int main() {
	string palavra;
	
	cout << "Insira uma palavra: " << "\n";
	cin >> palavra;
	
	for (int i = 0; i < palavra.length(); i++){
		cout << palavra.at(i) << endl;
	}
	return 0;
}
    

