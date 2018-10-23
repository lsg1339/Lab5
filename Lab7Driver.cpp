#include "Lab7MyStack.h"

int main()
{
	string input;
	cout << "Enter some characters to reverse: " << endl;
	cin >> input;
	cout << "\nThe reversed string is: " << stringReversal1(input) << endl;

	string input2;
	cout << "\nEnter more characters to reverse: " << endl;
	cin >> input2;
	cout << "\nThe reversed string is: " << stringReversal2(input2) << endl;

	string input3;
	cout << "\nEnter even more characters to reverse: " << endl;
	cin >> input3;
	cout << "\nThe reversed string is: " << stringReversal3(input3) << endl;

	string input4;
	cout << "\nEnter the last characters to reverse: " << endl;
	cin >> input4;
	cout << "\nThe reversed string is: " << stringReversal4(input4) << endl;

	system("pause");
	return 0;
}


