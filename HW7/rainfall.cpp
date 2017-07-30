#include "Stats.h"
#include <iostream>	
#include <iomanip>	
using namespace std;

int main()
{
	Stats rainfall;
	double usrInput;
	for (int i = 0; i < arraySize; ++i)
	{
		cout << "Enter rainfall data for month " << i+1 << ": ";
		cin >> usrInput;
		rainfall.setValue(i, usrInput);
	}
	rainfall.getValues();
	cout << "the total: " << rainfall.getTotal() << endl;
	cout << "the average: " << rainfall.getAvg() << endl;
	cout << "the largest: " << rainfall.getLargest() << endl;
	cout << "the smallest: " << rainfall.getSmallest() << endl;
	system("PAUSE");
	return 0;
}