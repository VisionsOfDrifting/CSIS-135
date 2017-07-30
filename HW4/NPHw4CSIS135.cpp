#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int getComputerChoice();
int getPlayerChoice();
string coutChoice(int);
bool isTie(int, int);
bool isPlayerWinner(int, int);

int main(void)
{
	char menuSelection;
	int compChoice, playerChoice;

	srand((unsigned int)time(NULL));

	do
	{
		cout << endl << "ROCK PAPER SCISSORS MENU\n------------------------\np) Play Game\nq) Quit\nPlease enter your choice : ";
		cin >> menuSelection;
		if (menuSelection == 'p')
		{
			playerChoice = getPlayerChoice();
			compChoice = getComputerChoice();
			cout << endl << endl
				<< "You chose : " << coutChoice(playerChoice) << endl
				<< "The computer chose : " << coutChoice(compChoice) << endl << endl;
			if (isTie(playerChoice, compChoice))
			{
				cout << "It's a TIE!\n\n";
			}
			else
			{
				if (isPlayerWinner(playerChoice, compChoice))
				{
					cout << "You WIN!\n\n";
				}
				else
				{
					cout << "Sorry you LOSE.\n\n";
				}
			}
		}
		else if (menuSelection == 'q')
		{
			cout << endl << "You have chosen to quit the program. Thank you for using the program!\n";
		}
		else
		{
			cout << endl << "Invalid selection. Try again.\n\n";
		}
	} while (menuSelection != 'q');
	//system("PAUSE");
	return 0;
}

int getComputerChoice()
{
	int cChoice;
	cChoice = rand() % 3 + 1;
	return cChoice;
}

int getPlayerChoice()
{
	int pChoice;
	do {
		cout << endl << "\n\nRock, Paper, or Scissors?\n1) Rock\n2) Paper\n3) Scissors\nPlease enter your choice : ";
		cin >> pChoice;
	} while (pChoice < 1 || pChoice >3);
	return pChoice;
}

string coutChoice(int Choice)
{
	string RPSChoice;
	if (Choice == 1)
	{
		RPSChoice = "Rock";
	}
	else if (Choice == 2)
	{
		RPSChoice = "Paper";
	}
	else if (Choice == 3)
	{
		RPSChoice = "Scissors";
	}
	return RPSChoice;
}

bool isTie(int PChoice, int CChoice)
{
	if (PChoice == CChoice)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isPlayerWinner(int PChoice, int CChoice)
{
	if (PChoice > CChoice && CChoice != 3)
	{
		return true;
	}
	else if (CChoice == 3 && PChoice == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//	1	2	3
//	R	P	S