#include "Stats.h"
#include <iostream>	
#include <iomanip>	
using namespace std; 

Stats::Stats()
{
	for (int i = 0; i < arraySize; ++i)
	{
		array[i] = 0;
	}
}

void Stats::setValue(int arrayN, double value)
{
	if (value < 0)
	{
		array[arrayN] = 0;
	}
	else
	{
		array[arrayN] = value;
	}

}

void Stats::getValues()
{
	for (int i = 0; i < arraySize; ++i)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
	
}

double Stats::getTotal()
{
	double total = 0;
	for (int i = 0; i < arraySize; ++i)
	{
		total += array[i];
	}
	return total;
}

double Stats::getAvg()
{
	double total = 0;
	for (int i = 0; i < arraySize; ++i)
	{
		total += array[i];
	}
	return total/arraySize;
}

double Stats::getLargest()
{
	double largest = array[0];
	for (int i = 1; i < arraySize; ++i)
	{
		if (array[i] > largest)
		{
			largest = array[i];
		}
	}
	return largest;
}

double Stats::getSmallest()
{
	double smallest = array[0];
	for (int i = 1; i < arraySize; ++i)
	{
		if (array[i] < smallest)
		{
			smallest = array[i];
		}
	}
	return smallest;
}
