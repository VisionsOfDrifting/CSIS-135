
//Nicholas Pappas

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(1)
		<< setw(6) << 3 << endl
		<< '*' << setw(5) << 5 << endl << "------\n"
		<< setprecision(2) << setw(6) << 15 << endl << endl
		<< setprecision(1) << setw(6) << 7.1 << endl
		<< '*' << setw(5) << 8.3 << endl
		<< '-' << setw(5) << 2.2 << endl << "------\n"
		<< setprecision(2) << setw(6) << 56.73 << endl << endl
		<< setprecision(1) << setw(6) << 3.2 << endl
		<< '/' << setw(2) << '(' << 6.1 << endl
		<< '*' << setprecision(2) << setw(4) << 5 << ')' << endl << "------\n"
		<< setprecision(2) << setw(6) << 0.10 << endl;
	system("PAUSE");
	return 0;
}