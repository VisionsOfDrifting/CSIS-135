
//Nicholas Pappas

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int numApples, numOranges, numBananas;
	double appleCost, orangeCost, bananaCost, totalCost;
	const double applePrice = 0.65, bananaPrice = 0.70, orangePrice = 0.90;
	cout << fixed << setprecision(2) << "Please enter the number of apples you want to purchase: ";
	cin >> numApples;
	cout << endl << "Please enter the number of oranges you want to purchase: ";
	cin >> numOranges;
	cout << endl << "Please enter the number of bananas you want to purchase: ";
	cin >> numBananas;

	appleCost = numApples * applePrice;
	orangeCost = numOranges * orangePrice;
	bananaCost = numBananas * bananaPrice;
	totalCost = appleCost + orangeCost + bananaCost;

	cout << endl << endl << "BOB'S FRUITS GROCERY INVOICE" << endl
		<< "----------------------------" << endl
		<< "  " << numApples << " Apples  @ "<< applePrice <<" each   = $ " << appleCost << endl
		<< "  " << numOranges << " Oranges @ " << orangePrice << " each   = $ " << orangeCost << endl
		<< "  " << numBananas << " Bananas @ " << bananaPrice << " each   = $ " << bananaCost << endl
		<< "			-----------" << endl
		<< "		    TOTAL = $ " << totalCost << endl;
	//system("PAUSE");
	return 0;
}