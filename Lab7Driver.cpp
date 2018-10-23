//Leonardo Garcia
//Lab 5

#include "Lab7MyStack.h"

int main()
{
	//testing the reversal function using the STL stack
	string input;
	cout << "Enter some characters to reverse: " << endl;
	cin >> input;
	cout << "\nThe reversed string is: " << stringReversal1(input) << endl;

	//testing the reversal function using a vector
	string input2;
	cout << "\nEnter more characters to reverse: " << endl;
	cin >> input2;
	cout << "\nThe reversed string is: " << stringReversal2(input2) << endl;

	//testing the reversal function using a list
	string input3;
	cout << "\nEnter even more characters to reverse: " << endl;
	cin >> input3;
	cout << "\nThe reversed string is: " << stringReversal3(input3) << endl;
	
	//testing the reversal function using my own stack class
	string input4;
	cout << "\nEnter the last characters to reverse: " << endl;
	cin >> input4;
	cout << "\nThe reversed string is: " << stringReversal4(input4) << endl;

	system("pause");
	return 0;
}


