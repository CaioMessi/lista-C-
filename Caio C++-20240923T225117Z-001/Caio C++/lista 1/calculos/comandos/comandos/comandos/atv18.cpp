#include <iostream>
#include <locale>
#include <algorithm>

using namespace std;

int main (){
	string name;
	int age;
	
	name.erase(remove (name.begin(), name.end(), ' '), name.end());
	 
	
}
