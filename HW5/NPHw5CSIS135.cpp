#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

string getNewString();
string getAnotherNewString();
string inverseString(string);
string reverseString(string);
string toUppercase(string);
int numWords(string);
int numConsonants(string);

int main(void)
{
	string userString;
	char menuSelection;

	userString = getNewString();
	do
	{
		cout << "\nUSE THIS MENU TO MANIPULATE YOUR STRING\n---------------------------------------\n1) Inverse String\n2) Reverse String\n3) To Uppercase\n4) Count Number Words\n5) Count Consonants\n6) Enter a Different String\n7) Print the string\nQ) Quit\n";
		cin >> menuSelection;
		cin.ignore();
		if (menuSelection == '1')
		{
			userString = inverseString(userString);
		}
		else if (menuSelection == '2')
		{
			userString = reverseString(userString);
		}
		else if (menuSelection == '3')
		{
			userString = toUppercase(userString);
		}
		else if (menuSelection == '4')
		{
			cout << "\nThe string " << '"' << userString << '"'
				<< " has " << numWords(userString) << " word(s)\n";
		}
		else if (menuSelection == '5')
		{
			cout << "\nThe number of consonants in the string is "
				<< numConsonants(userString) << ".\n";
		}
		else if (menuSelection == '6')
		{
			userString = getAnotherNewString();
		}
		else if (menuSelection == '7')
		{
			cout << "\nThe current string is: " << userString << endl;
		}
		else if (menuSelection == 'q' || menuSelection == 'Q')
		{
			cout << endl << "You have chosen to quit the program. Thank you!\n";
		}
		else
		{
			cout << endl << "Invalid selection. Please try again.\n";
		}
	} while (menuSelection != 'q' && menuSelection != 'Q');
	//system("PAUSE");
	return 0;
}

string getNewString()
{
	string newString;
	cout << "Please enter a word, a sentence, or a string of numbers.";
	getline(cin, newString);
	cout << endl;
	return newString;
}

string getAnotherNewString()
{
	string newString;
	cout << "\nEnter a different string : ";
	getline(cin, newString);
	cout << endl;
	return newString;
}

string inverseString(string currentString)
{
	string newString = currentString;
	int j = 0;
	for (int i = 0; i <= currentString.length() - 1; i++)
	{
		if (isupper(currentString[i]))
		{
			newString[j] = (char)(tolower(currentString[i]));
		}
		else
		{
			newString[j] = (char)(toupper(currentString[i]));
		}
		j++;
	}
	return newString;
}

string reverseString(string currentString)
{
	string newString = currentString;
	int j = 0;
	for (int i = currentString.length() - 1; i >= 0; i--)
	{
		newString[j] = currentString[i];
		j++;
	}
	return newString;
}

string toUppercase(string currentString)
{
	string newString = currentString;
	int j = 0;
	for (int i = 0; i <= currentString.length(); i++)
	{
		if (islower(currentString[i]))
		{
			newString[j] = (char)(toupper(currentString[i]));
			
		}
		else
		{}
		j++;
	}
	return newString;
}

int numWords(string currentString)
{
	bool spaceB4 = true;
	int wordCount = 0;
	for (int i = 0; i <= currentString.length(); i++)
	{
		if (isspace(currentString[i]))
		{
			spaceB4 = true;
		}
		else if(spaceB4 == true)
		{
			wordCount++;
			spaceB4 = false;
		}
	}
	return wordCount;
}

int numConsonants(string currentString)
{
	int notVowels = 0;
	char ch;
	for (int i = 0; i <= currentString.length(); i++)
	{
		if (isalpha(currentString[i]))
		{
			ch = currentString[i];
			if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			{
			}
			else
			{
				notVowels++;
			}
		}
		else
		{
		}
	}
	return notVowels;
}