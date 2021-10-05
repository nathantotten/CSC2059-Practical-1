#include "myFunctions.h"
#include <iostream> 

using namespace std;

int iAdd(int a, int b)
{
	return a + b;
}

double divideXbyY(double x, double y) 
{
	if (y == 0.0) {
		cout << "division by zero error" << endl;
		exit(0);
	}
	return x / y;
}

int divideXbyY(int x, int y)
{
	if (y == 0) {
		cout << "division by zero error" << endl;
		exit(0);
	}
	return x / y;
}

double Log(double x)
{
	if (x <= 0.0) {
		cout << "illegal condition for log: x = " << x << endl;
		exit(0);
	}
	return log(x);
}

double Sqrt(double x)
{
	if (x < 0.0) {
		cout << "illegal condition for sqrt: x = " << x << endl;
		exit(0);
	}
	return sqrt(x);
}

void sortPrint(int i, int j, int k)
{
	int temp = 0; // alway initialse an unused variable

	// swap i, j with i holding the larger number
	if (i < j) {
		temp = j;
		j = i;
		i = temp;
	}
	// swap j, k with j holding the larger number
	if (j < k) {
		temp = k;
		k = j;
		j = temp;
	}
	// swap i, j with i holding the larger number
	if (i < j) {
		temp = j;
		j = i;
		i = temp;
	}

	// chaining << for outputting multiple items
	cout << i << " " << j << " " << k << endl; // " " is a space
}

double myCalculator(double a, char op, double b)
{
	switch (op) {
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		return divideXbyY(a, b);
		break;
	default:
		cout << "Unknown operator: " << op << endl;
		exit(0);  // no appropriate double-precision number to return here, so terminate the program
	}
}


//Test comment