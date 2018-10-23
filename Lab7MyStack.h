//Leonardo Garcia
//Lab 5

#include<string>
#include<stack>
#include<vector>
#include<list>
#include<iostream>

using namespace std;

//declaring all the different functions defined in the cpp file
string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);


//class to simplify stack for the user
class MyStack
{
	//vector<char> v;
	list<char> v;

public:
	
	//method to check if the vector is empty
	bool isEmpty()
	{
		if (v.empty())
		{
			return true;
		}
		else {
			return false;
		}
			
	}
	
	//method to move all elements in the vector over one and insert a character
	 void push(char c)
	{
		v.push_back(c);
	}

	 //method to return the last element in the vector and delete it from the vector
	 char pull()
	{
		 char a = v.back();
		 v.pop_back();
		 return a;
	}
};