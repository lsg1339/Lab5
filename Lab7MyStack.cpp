
#include "Lab7MyStack.h"

string stringReversal1(string input)
{
	stack<char> c;
	string str2;


		for (int i = 0; i < input.size(); i++)
		{
			c.push(input[i]);
		}

		for (int i = 0; !c.empty(); i++)
		{
			str2 += c.top();
			c.pop();
		}
	
	return str2;
}


string stringReversal2(string input)
{
	vector<char> a;
	string str3;

	for (int i = 0; i < input.size(); i++)
	{
		a.push_back(input[i]);
	}

	for (int i = 0; !a.empty(); i++)
	{
		str3 += a.back();
		a.pop_back();
	}

	return str3;
}

string stringReversal3(string input)
{
	list<char> b;
	string str4;

	for (int i = 0; i < input.size(); i++)
	{
		b.push_back(input[i]);
	}

	for (int i = 0; !b.empty(); i++)
	{
		str4 += b.back();
		b.pop_back();
	}

	return str4;
}

string stringReversal4(string input)
{
	MyStack v;
	string str5;

	for (int i = 0; i < input.size(); i++)
	{
		v.push(input.at(i));
	}

	for (int i = 0; !v.empty(); i++)
	{
		str5 += v.pull();
	}

	return str5;
}
