// C++ Program to display alphabets using ASCII values
#include <iostream>

using namespace std;

int main()
{
	int i;

	cout << "Alphabets from (A-Z) are:\n";

	// ASCII value of A=65 and Z=90
	for (i = 65; i <= 90; i++) {
		// Integer i with %c will be converted to character
		// before printing.%c will takes its equivalent
		// character value
		cout << (char)i << " ";
	}

	cout << "\nAlphabets from (a-z) are:\n";

	// ASCII value of a=97 and z=122
	for (i = 97; i <= 122; i++) {
		// Integer i with %c will be converted to character
		// before printing.%c will takes its equivalent
		// character value
		cout << (char)i << " ";
	}
	return 0;
}

