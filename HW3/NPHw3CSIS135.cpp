#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	char menuSelection;
	int tableNum;
	do
	{
		cout << "MENU\na) Generate Multiplication Table\nq) Quit the program\nPlease make a selection: ";
		cin >> menuSelection;
		if (menuSelection == 'a')
		{
			cout << "Please enter a number for your multiplication table: ";
			do
			{
				cin >> tableNum;
				cout << endl << endl;
				if (tableNum <= 0)
				{
					cout << "Please enter a positive non-zero integer\n";
				}
				if (tableNum > 15)
				{
					cout << "Please enter an integer smaller than 16\n";
				}
			} while (tableNum <= 0 || tableNum > 15);

			cout << "MULTIPLICATION TABLE: " << tableNum << "'s\n\n";
			for (int j = 1; j <= tableNum; j++)
			{
				cout << setw(5) << j;
			}
			cout << "\n   ";
			for (int j = 1; j <= tableNum; j++)
			{
				cout << "----|";
			}
			cout << "\n";
			for (int c = 1; c <= tableNum; c++)
			{
				cout << setw(2) << c << "|";
				for (int i = 1; i <= tableNum; i++)
				{
					cout << setw(4) << i * c << "|";
				}
				cout << endl << " -|";
				for (int j = 1; j <= tableNum; j++)
				{
					cout << "----|";
				}
				cout << endl;
			}
			cout << endl;
		}
		else if (menuSelection != 'q')
		{
			cout << "Invalid Selection\n\n";
		}
	} while (menuSelection != 'q');
	cout << "You have chosen to quit the program. Thank you for using!\n";
	//system("PAUSE");
	return 0;
}