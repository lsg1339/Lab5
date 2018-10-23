
#include<string>
#include<stack>
#include<vector>
#include<list>
#include<iostream>

using namespace std;

string stringReversal1(string input);

string stringReversal2(string input);

string stringReversal3(string input);

string stringReversal4(string input);

class MyStack
{
	//vector<char> v;
	list<char> v;

public:
	bool empty()
	{
		if (v.empty())
		{
			return true;
		}
		else {
			return false;
		}
			
	}
	
	 void push(char c)
	{
		v.push_back(c);
	}

	 char pull()
	{
		 char a = v.back();
		 v.pop_back();
		 return a;
	}
};