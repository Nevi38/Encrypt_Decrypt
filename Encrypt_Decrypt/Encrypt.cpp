#include <iostream>
#include "lib/Encrypt.cpp"

using namespace std;

int main()
{
	string text;
	int Xkey;

	cout << "Enter your text here: ";
	getline(cin, text);

	cout << "Enter your Xkey: ";
	cin >> Xkey;

	cout << "Encrypt: " << endl;
	cout << Encrypt(text, Xkey) << endl;
	
	return 0;
}
