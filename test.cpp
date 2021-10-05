#include "myFunctions.h" // user-defined class, included using ""
#include <iostream> // system i/o class, included using <>
#include <string>   // system string class, included using <>
#include <ctime>	// system library, included using <>

using namespace std;

// three attmepts to guess a magic number 
int main()
{
	// seed the random number generator with the present time
	srand(time(0));

	// a random number between 0-9 (inclusive) to be gussed
	int magicNumber = rand() % 10;

	// three go-s
	int go = 3;
	while (go-- > 0) {
		cout << "Enter your Guess for the Number: ";
		int guess;
		cin >> guess;

		if (magicNumber == guess) {
			cout << "Congratulations Right Guess\n";
			break;
		}
		cout << "Sorry Wrong Guess\n";
	}

	return 0;
}

// test random numbers and loops
int main6()
{
	// read N, R
	int N, R;
	cout << "Input N, R: the number and range of random numbers to generate" << endl;
	cin >> N >> R;

	// set the initial point for generating the random numbers using current time
	// so each run will give you a different sequence of random numbers
	// need to #include <ctime>
	srand(time(0));

	// generate N random numbers using rand() in the range [0, R-1] inclusive, and calculate their sum
	int sum = 0;
	for (int n = 0; n < N; n++) {
		int rn = rand() % R;
		cout << rn << endl;
		sum += rn;
	}
	// output the average of these numbers
	cout << "average = " << sum / N << endl;

	/* implement the above loop operation by using while, and do...while loops */
	int n = N;
	sum = 0;
	while (n-- > 0) {
		int rn = rand() % R;
		cout << rn << endl;
		sum += rn;
	}
	cout << "average = " << sum / N << endl;

	n = N;
	sum = 0;
	do {
		int rn = rand() % R;
		cout << rn << endl;
		sum += rn;
	} while (--n > 0);
	cout << "average = " << sum / N << endl;

	return 0;
}

// test myCalculator
int main5()
{
	double a, b;
	char op;
	cout << "Input the formula to calculate (e.g. 3 + 2)" << endl;

	cin >> a >> op >> b;
	cout << "Answer = " << myCalculator(a, op, b) << endl;

	return 0;
}

// test sortPrint
int main4()
{
	// defined 3 variables to hold the input numbers
	int i = 0, j = 0, k = 0;

	// message for input
	cout << "Type three integer numbers" << "\n";

	// chaining >> for reading multipe items, & call sortPrint
	cin >> i >> j >> k;
	sortPrint(i, j, k);

	return 0;
}

// test differences between cin & getline
int main3()
{
	// variables that can be used to hold a line of items read from keyboard
	string str;	  // a string-type variable, use with #include <string>
	char chs[20];

	// use getline to read a line of items with gaps
	cout << "Type today's date in format: dd mm yyyy" << endl;
	getline(cin, str);
	// print what are read
	cout << str << endl << endl;

	// use cin to read a line of items with gaps
	cout << "Type today's date in format: dd mm yyyy" << endl;
	cin >> chs;
	// print what are read
	cout << chs << endl;

	return 0;
}

// test cout, cin
int main2()
{
	char name[20];	// a char-type array of 20 characters
	int year = 0;	// an integer

	// message to user
	cout << "tell me your first name and which year you are in QUB:" << endl;
	// read user's input
	cin >> name >> year;

	// print what are read
	cout << name << " " << year << "\n";

	return 0;
}

// test iAdd, divideXbyY, Log(x), Sqrt(x);
int main1()
{
	// cout: print results to screen
	cout << iAdd(12, 13) << "\n"; // newline operator

	cout << divideXbyY(1, 2) << endl; // newline operator
	cout << divideXbyY(1.0, 2.0) << endl; 
	cout << divideXbyY(16.0, 0.0) << endl;

	cout << Log(2.0) << endl;
	cout << Log(0.0) << endl;

	cout << Sqrt(100) << endl;
	cout << Sqrt(-1.0) << endl;

	return 0;
}

//Test comment
