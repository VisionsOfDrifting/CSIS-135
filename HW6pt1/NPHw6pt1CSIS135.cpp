
#include <iostream>	
#include <string>
#include <iomanip>	
#include <cstdlib>	
#include <ctime>		

using namespace std;

void getLottoPicks(int[], int);
bool duplicatesCheck(int, int[], int);
bool invalidNumber(int);
void genWinNums(int[], int);
int numbersMatch(int[], int[], int);
string winningPrize(int);


int main()
{
	srand(time(NULL));
	char usrChoice;
	string usrName;

	const int arraySize = 7;
	int userTicket[arraySize], winningNums[arraySize];
	do
	{
		cout << "LITTLETON CITY LOTTO MODEL:\n";
		cout << "---------------------------\n";
		cout << "1) Play Lotto\n";
		cout << "q) Quit Program\n";
		cout << "Please make a selection: ";
		cin >> usrChoice;
		if (usrChoice == '1')
		{
			cout << "Please enter your name: ";
			cin.ignore();
			getline(cin, usrName);
			getLottoPicks(userTicket, arraySize);
			genWinNums(winningNums, arraySize);
			cout << endl << usrName << "\'S LOTTO RESULTS\n";
			cout << "----------------------\n";
			cout << "WINNING\t" << "TICKET NUMBERS: ";
			for (int i = 0; i < arraySize; i++)
				cout << setw(2) << winningNums[i] << "  ";
			cout << endl << usrName << "\'S\t" << "TICKET NUMBERS: ";
			for (int i = 0; i < arraySize; i++)
				cout << setw(2) << userTicket[i] << "  ";
			cout << endl;

			cout << "\nRESULTS :\n";
			cout << "---------\n";
			cout << "Number Matches: " << numbersMatch(userTicket, winningNums, arraySize) << endl << endl;
			cout << "Winnings      : " << winningPrize(numbersMatch(userTicket, winningNums, arraySize)) << endl;
			cout << endl;
		}
	} while (usrChoice != 'q' && usrChoice != 'Q');
	cout << "You have chosen to quit the program. Thank you for using!\n";
	return 0;
}

void getLottoPicks(int userTicket[], int arraySize)
{
	int usrSelection;

	cout << "Please enter your 7 lotto number picks between 1 and 40.\n";

	for (int i = 0; i < arraySize; i++)
	{
		cout << "selection #" << i + 1 << ": ";
		cin >> usrSelection;
		while (duplicatesCheck(usrSelection, userTicket, i) == true || invalidNumber(usrSelection) == true)
		{
			if (duplicatesCheck(usrSelection, userTicket, i) == true)
			{
				cout << "You already picked this number. Please enter a different number: ";
			}
			else
			{
				cout << "The number must be between 1 and 40. Please try again: ";
			}
			cin >> usrSelection;
		}
		userTicket[i] = usrSelection;
	}
}

bool duplicatesCheck(int usrSelection, int userTicket[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (usrSelection == userTicket[i])
		{
			return true;
		}
	}
	return false;
}

bool invalidNumber(int usrSelection)
{
	if (usrSelection > 0 && usrSelection < 41)
	{
		return false;
	}
	return true;
}

void genWinNums(int winningNums[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
		do
		{
			winningNums[i] = rand() % 40 + 1;
		} while (duplicatesCheck(winningNums[i], winningNums, i) == true);
}

int numbersMatch(int firstArray[], int secondArray[], int arraySize)
{
	int numMatch = 0;
	for (int i = 0; i < arraySize; i++)
	{
		if (duplicatesCheck(firstArray[i], secondArray, arraySize) == true)
		{
			++numMatch;
		}
	}
	return numMatch;
}

string winningPrize(int numMatch)
{
	string prize;
	switch (numMatch)
	{
	case 0:
	case 1:
	case 2:
	{
		prize = "Sorry Nothing\n";
		break;
	}
	case 3:
	{
		prize = "Free Ticket\n";
		break;
	}
	case 4:
	{
		prize = "You won $100\n";
		break;
	}
	case 5:
	{
		prize = "You won $5,000\n";
		break;
	}
	case 6:
	{
		prize = "You won $100,000\n";
		break;
	}
	case 7:
	{
		prize = "You won a million dollar prize!!";
		break;
	}
	default:
	{
		break;
	}
	return prize;
	}
}