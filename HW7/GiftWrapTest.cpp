#include "GiftWrap.h"
#include <iostream>	
#include <iomanip>	
#include <string>
using namespace std;


int main()
{
	GiftWrap gift(0.0925, 0.0025);
	char usrSelection;
	double usrInput;
	string storeName = "Sally's Gifts";
	
	do
	{
		cout << "GIFT WRAP INVOICE GENERATOR\n";
		cout << "-------------------------------\n";
		cout << "a)Generate Gift Wrap Invoice\n";
		cout << "q)Quit\n\n";
		cout << "Selection: ";
		cin >> usrSelection;
		cout << endl;

		if(usrSelection == 'a' || usrSelection == 'A')
		{
			cout << "Enter length: ";
			cin >> usrInput;
			gift.setLength(usrInput);
			cout << "Enter width: ";
			cin >> usrInput;
			gift.setWidth(usrInput);
			cout << "Enter height: ";
			cin >> usrInput;
			gift.setHeight(usrInput);
			cout << endl;

			cout << "GIFT WRAP INVOICE - " << storeName << endl;
			cout << "----------------------------------\n";
			cout << "Box Length: " << fixed << setprecision(1) << gift.getLength() << "\n";
			cout << "Box Width:  " << setprecision(1) << gift.getWidth() << "\n";
			cout << "Box Height: " << setprecision(1) << gift.getHeight() << "\n";
			cout << "Price Per Inch: $" << setprecision(4) << gift.getPricePerInch() << "\n\n";

			cout << "SUBTOTAL:\t$" << setprecision(2) << gift.calcSubTotal() << "\n";
			cout << "TAX:     \t$" << setprecision(2) << gift.calcTax() << "\n";
			cout << "         \t-----\n";
			cout << "TOTAL:   \t$" << setprecision(2) << gift.calcTotal() << "\n\n";
		}
		else if(usrSelection != 'a' && usrSelection != 'A' && usrSelection != 'q' && usrSelection != 'Q')
		{
			cout << "Invalid Selection\n\n";
		}	

	}while(usrSelection != 'q' && usrSelection != 'Q');
	system("PAUSE");
	return 0;
}