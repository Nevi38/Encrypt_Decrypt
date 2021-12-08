#include <iostream>
#include "lib/Decrypt.cpp"

using namespace std;

int main()
{
	string text;
	int Xkey;

	cout << "Enter your text encrypted or Paste text here: " << endl;
	getline(cin, text);

	cout << "Enter your Xkey: ";
	cin >> Xkey;

	cout << "Decrypt: " << endl;
	
	cout << Decrypt(text, Xkey);
	
	return 0;
}
