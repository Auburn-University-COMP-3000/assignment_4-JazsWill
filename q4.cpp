#include <iostream> 
#include <cstdlib> // for exit()
#include <cctype>  // for tolower()

using namespace std;

// Assignment 4 - Exercise 4

class Month
{
	private:
		int mnth;

	public:
		//a default constructor (what does it do? nothing)
		Month(); // done, no debugging to do

		//constructor to set month based on first 3 chars of the month name
		Month(char c1, char c2, char c3)   // done, debugged
		{
			if ((c1 == 'j' && c2 == 'a' && c3 == 'n') || (c1 == 'J' && c2 == 'a' && c3 == 'n'))
			{
				mnth = 1;
			}
			else if ((c1 == 'f' && c2 == 'e' && c3 == 'b') || (c1 == 'F' && c2 == 'e' && c3 == 'b'))
			{
				mnth = 2;
			}
			else if ((c1 == 'm' && c2 == 'a' && c3 == 'r') || (c1 == 'M' && c2 == 'a' && c3 == 'r'))
			{
				mnth = 3;
			}
			else if ((c1 == 'a' && c2 == 'p' && c3 == 'r') || (c1 == 'A' && c2 == 'p' && c3 == 'r'))
			{
				mnth = 4;
			}
			else if ((c1 == 'm' && c2 == 'a' && c3 == 'y') || (c1 == 'M' && c2 == 'a' && c3 == 'y'))
			{
				mnth = 5;
			}
			else if ((c1 == 'j' && c2 == 'u' && c3 == 'n') || (c1 == 'J' && c2 == 'u' && c3 == 'n'))
			{
				mnth = 6;
			}
			else if ((c1 == 'j' && c2 == 'u' && c3 == 'l') || (c1 == 'J' && c2 == 'u' && c3 == 'l'))
			{
				mnth = 7;
			}
			else if ((c1 == 'a' && c2 == 'u' && c3 == 'g') || (c1 == 'A' && c2 == 'u' && c3 == 'g'))
			{
				mnth = 8;
			}
			else if ((c1 == 's' && c2 == 'e' && c3 == 'p') || (c1 == 'S' && c2 == 'e' && c3 == 'p'))
			{
				mnth = 9;
			}
			else if ((c1 == 'o' && c2 == 'c' && c3 == 't') || (c1 == 'O' && c2 == 'c' && c3 == 't'))
			{
				mnth = 10;
			}
			else if ((c1 == 'n' && c2 == 'o' && c3 == 'v') || (c1 == 'N' && c2 == 'o' && c3 == 'v'))
			{
				mnth = 11;
			}
			else if ((c1 == 'd' && c2 == 'e' && c3 == 'c') || (c1 == 'D' && c2 == 'e' && c3 == 'c'))
			{
				mnth = 12;
			}
			else
			{
				cout << "Invalid Input.";
			}
		}

		//a constructor to set month base on month number, 1 = January etc.
		Month(int monthNumber)            // done, debugged
		{
			mnth = monthNumber;
		}

		//an input function to set the month based on the month number
		void getMonthByNumber(istream& in) // done, debugged
		{
			in >> mnth;
		}

		//input function to set the month based on a three character input
		void getMonthByName(istream& in)   // done, debugged
		{
			char c1, c2, c3;
			in >> c1 >> c2 >> c3;

			if ((c1 == 'j' && c2 == 'a' && c3 == 'n') || (c1 == 'J' && c2 == 'a' && c3 == 'n'))
			{
				mnth = 1;
			}
			else if ((c1 == 'f' && c2 == 'e' && c3 == 'b') || (c1 == 'F' && c2 == 'e' && c3 == 'b'))
			{
				mnth = 2;
			}
			else if ((c1 == 'm' && c2 == 'a' && c3 == 'r') || (c1 == 'M' && c2 == 'a' && c3 == 'r'))
			{
				mnth = 3;
			}
			else if ((c1 == 'a' && c2 == 'p' && c3 == 'r') || (c1 == 'A' && c2 == 'p' && c3 == 'r'))
			{
				mnth = 4;
			}
			else if ((c1 == 'm' && c2 == 'a' && c3 == 'y') || (c1 == 'M' && c2 == 'a' && c3 == 'y'))
			{
				mnth = 5;
			}
			else if ((c1 == 'j' && c2 == 'u' && c3 == 'n') || (c1 == 'J' && c2 == 'u' && c3 == 'n'))
			{
				mnth = 6;
			}
			else if ((c1 == 'j' && c2 == 'u' && c3 == 'l') || (c1 == 'J' && c2 == 'u' && c3 == 'l'))
			{
				mnth = 7;
			}
			else if ((c1 == 'a' && c2 == 'u' && c3 == 'g') || (c1 == 'A' && c2 == 'u' && c3 == 'g'))
			{
				mnth = 8;
			}
			else if ((c1 == 's' && c2 == 'e' && c3 == 'p') || (c1 == 'S' && c2 == 'e' && c3 == 'p'))
			{
				mnth = 9;
			}
			else if ((c1 == 'o' && c2 == 'c' && c3 == 't') || (c1 == 'O' && c2 == 'c' && c3 == 't'))
			{
				mnth = 10;
			}
			else if ((c1 == 'n' && c2 == 'o' && c3 == 'v') || (c1 == 'N' && c2 == 'o' && c3 == 'v'))
			{
				mnth = 11;
			}
			else if ((c1 == 'd' && c2 == 'e' && c3 == 'c') || (c1 == 'D' && c2 == 'e' && c3 == 'c'))
			{
				mnth = 12;
			}
			else
			{
				cout << "Invalid Input.";
			}
		}

		//an output function that outputs the month as an integer,
		void outputMonthNumber(ostream& out) // done, debugged
		{
			out << mnth;
		}

		//an output function that outputs the month as the letters.
		void outputMonthName(ostream& out)   // done, debugged
		{
			switch (mnth)
			{
				case 1:
				{
					out << "Jan";
					break;
				}
				case 2:
				{
					out << "Feb";
					break;
				}
				case 3:
				{
					out << "Mar";
					break;
				}
				case 4:
				{
					out << "Apr";
					break;
				}
				case 5:
				{
					out << "May";
					break;
				}
				case 6:
				{
					out << "Jun";
					break;
				}
				case 7:
				{
					out << "Jul";
					break;
				}
				case 8:
				{
					out << "Aug";
					break;
				}
				case 9:
				{
					out << "Sep";
					break;
				}
				case 10:
				{
					out << "Oct";
					break;
				}
				case 11:
				{
					out << "Nov";
					break;
				}
				case 12:
				{
					out << "Dec";
					break;
				}
			}
		}

		//a function that returns the next month as a month object
		Month nextMonth() //
		{
			int nxtMonth;
			if (mnth < 12)
			{
				nxtMonth = mnth++;
			}
			else
			{
				nxtMonth = 1;
			}

			return nxtMonth;
		}

		//NB: each input and output function have a single formal parameter
		//for the stream

		int monthNumber()
		{
			return mnth;
		}
};

int main()
{
  // Assignment 4 - Exercise 4

	Month testMonth;
	char testAgain;
	string inputMonth;

	do
	{
		cout << "Test Program\n";
		cout << "Enter a month into the test program using the first 3 letters: ";
		//cin >> inputMonth;

		testMonth.getMonthByName(cin);
		cout << endl;
		testMonth.outputMonthName(cout); 
		cout << " ";
		testMonth.outputMonthNumber(cout); 
		cout << endl;

		cout << "Do you want to test the program again?: ";
		cin >> testAgain;
	} 
	while ((testAgain == 'Y') || (testAgain == 'y'));

	
	return 0;
}
