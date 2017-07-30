#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int rowSize = 15, colSize = 20;
void initializeSeats(bool[rowSize][colSize]);
void displaySeats(bool[rowSize][colSize]);
bool seatsAvailab[rowSize][colSize];
double seatsPrice[rowSize];
void purchaseSeats(bool[rowSize][colSize], double&, int&);

int main()
{

	char usrSelection;

	initializeSeats(seatsAvailab);
	displaySeats(seatsAvailab);
	double totalPrice = 0;
	int ticketsSold = 0;

	cout << "Please enter a ticket price for each row.\n";
	for (int usrRow = 0; usrRow < rowSize; ++usrRow)
	{
		cout << "Row #" << usrRow << " : ";
		cin >> seatsPrice[usrRow];
	}
	do
	{
		cout << "\nMOVIE THEATER MENU\n"
			<< "------------------\n"
			<< "1) Sell a ticket\n"
			<< "Q) Quit program\n"
			<< "Please make a selection : ";

		cin >> usrSelection;

		while (usrSelection != '1' && usrSelection != 'Q' && usrSelection != 'q')
		{
			cout << "Invalid selection. Please try again.";
			cout << "\n\nMOVIE THEATER MENU\n"
				<< "------------------\n"
				<< "1) Sell a ticket\n"
				<< "Q) Quit program\n"
				<< "Please make a selection : ";

			cin >> usrSelection;
		}


		if (usrSelection == '1')
		{
			purchaseSeats(seatsAvailab, totalPrice, ticketsSold);
		}

	} while (usrSelection != 'Q' && usrSelection != 'q');

	cout << "\nUPDATED SEATING CHART AND SALES INFO\n------------------------------------\n";
	displaySeats(seatsAvailab);


	cout << "TOTAL TICKETS SOLD: " << ticketsSold << endl;
	cout << "TOTAL REVENUE: $" << setprecision(2) << fixed << totalPrice << endl;
	return 0;
}

void initializeSeats(bool seats[rowSize][colSize])
{
	for (int row = 0; row < rowSize; ++row)
	{
		for (int col = 0; col < colSize; ++col)
		{
			seats[row][col] = false;
		}
	}
}

void displaySeats(bool seats[rowSize][colSize])
{
	cout << "Seats:";
	for (int col = 0; col < colSize; ++col)
	{
		cout << " " << right << setw(2) << col;
	}
	cout << endl;

	for (int row = 0; row < rowSize; ++row)
	{
		cout << "Row " << left << setw(2) << row;
		for (int col = 0; col < colSize; ++col)
		{
			if (seats[row][col] == false)
			{
				cout << "  *";
			}
			else cout << "  #";
		}
		cout << endl;
	}
	cout << endl;
}

void purchaseSeats(bool seats[rowSize][colSize], double &totalPrice, int &ticketsSold)
{
	int usrRow, usrCol;
	cout << "\nPlease enter a row number and seat number for the ticket:\n"
		<< "Row # : ";

	cin >> usrRow;
	while (usrRow < 0 || usrRow > 14)
	{
		cout << "Row # must be between 0 and 14. Please enter again: \n";
		cin >> usrRow;
	}

	cout << "Seat # : ";
	cin >> usrCol;
	while (usrCol < 0 || usrCol > 19)
	{
		cout << "Seat # must be between 0 and 19. Please enter again: \n";
		cin >> usrCol;
	}
	if (seatsAvailab[usrRow][usrCol] == true)
	{
		cout << "\nSorry. The ticket is not available for this seat.\n";
	}
	else
	{
		seats[usrRow][usrCol] = true;
		totalPrice += seatsPrice[usrRow];
		ticketsSold += 1;
	}
}