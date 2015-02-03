#include <iostream>

using namespace std;

int main(){

	string str;
	cout << "Frase: ";
	getline(cin, str);
	cout << endl << left << str << endl;

	return 0;
}