#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;


class MathException : public exception 
{
public:
	MathException(const char* msg) :exception(msg)
	{
	}
};

int foo(char mathem[]) 
{

	int n, s, m;

	n = mathem[0];
	s = mathem[1];
	m = mathem[2];

	switch (n) 
	{
	case '0':
		n = 0;
		break;
	case '1':
		n = 1;
		break;
	case '2':
		n = 2;
		break;
	case '3':
		n = 3;
		break;
	case '4':
		n = 4;
		break;
	case '5':
		n = 5;
		break;
	case '6':
		n = 6;
		break;
	case '7':
		n = 7;
		break;
	case '8':
		n = 8;
		break;
	case '9':
		n = 9;
		break;

	default:
		throw MathException("You entered an invalid first number");
		break;
	}
	switch (s) 
	{
	case '+':
		s = 1;
		break;
	case '-':
		s = 2;
		break;
	case '/':
		s = 3;
		break;
	case '*':
		s = 4;
		break;

	default:
		throw MathException("You entered an invalid math operator");
		break;
	}
	switch (m) 
	{
	case '0':
		m = 0;
		break;
	case '1':
		m = 1;
		break;
	case '2':
		m = 2;
		break;
	case '3':
		m = 3;
		break;
	case '4':
		m = 4;
		break;
	case '5':
		m = 5;
		break;
	case '6':
		m = 6;
		break;
	case '7':
		m = 7;
		break;
	case '8':
		m = 8;
		break;
	case '9':
		m = 9;
		break;

	default:
		throw MathException("You entered an invalid second number");
		break;
	}

	int z;

	if (s == 1) 
	{
		z = n + m;
	}
	if (s == 2) 
	{
		z = n - m;
	}
	if (s == 3) {
		if (m == 0) 
		{
			throw MathException("Can't divide by zero");
		}
		else {
			z = n / m;
		}
	}
	if (s == 4) {
		z = n * m;
	}

	cout << z << endl;

	return z;
}


void main() 
{

	char math[10];

	cout << "Enter math operation" << endl;
	gets_s(math);

	try 
	{
		foo(math);
	}
	catch (MathException& ex) 
	{
		cout << ex.what() << endl;
	}
}