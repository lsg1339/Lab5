//Leonardo Garcia
//Lab 5

#include "Lab7MyStack.h"

//reversing a string using the STL stack
string stringReversal1(string input)
{
	stack<char> c;
	string str2;

		//adding each character from the input string to the stack
		for (int i = 0; i < input.size(); i++)
		{
			c.push(input[i]);
		}

		//adding each character from the stack to an output string
		for (int i = 0; !c.empty(); i++)
		{
			str2 += c.top();
			c.pop();
		}
	
	return str2;
}

//reversing a string using a vector
string stringReversal2(string input)
{
	vector<char> a;
	string str3;

	//adding each character from the input string to the vector
	for (int i = 0; i < input.size(); i++)
	{
		a.push_back(input[i]);
	}

	//adding each character in the vector to an output string
	for (int i = 0; !a.empty(); i++)
	{
		str3 += a.back();
		a.pop_back();
	}

	return str3;
}

//reversing a string using a list
string stringReversal3(string input)
{
	list<char> b;
	string str4;

	//adding each character from the input string to the list
	for (int i = 0; i < input.size(); i++)
	{
		b.push_back(input[i]);
	}

	//adding each character in the list to an output string
	for (int i = 0; !b.empty(); i++)
	{
		str4 += b.back();
		b.pop_back();
	}

	return str4;
}

string stringReversal4(string input)
{
	//declaring an object of class MyStack
	MyStack v;
	string str5;

	//using my push method to add inputs to a vector
	for (int i = 0; i < input.size(); i++)
	{
		v.push(input.at(i));
	}

	//using my pull method to retrieve and delete the last character in the vector
	for (int i = 0; !v.isEmpty(); i++)
	{
		str5 += v.pull();
	}

	return str5;
}
