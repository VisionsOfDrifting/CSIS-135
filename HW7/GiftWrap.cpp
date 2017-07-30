#include "GiftWrap.h"
#include <iostream>	
#include <iomanip>	
using namespace std; 

GiftWrap::GiftWrap()
{
	length = 1;
	width = 1;
	height = 1;
	pricePerInch = 0.0036;
	taxRate = 0.08;
}

GiftWrap::GiftWrap(double nTaxRate, double nPricePerInch)
{
	length = 1;
	width = 1;
	height = 1;

	if (nPricePerInch >= 0)
	{
		pricePerInch = nPricePerInch;
	}
	else
	{
		pricePerInch = 0.0036;
	}
	
	if (nTaxRate >= 0 && nTaxRate <= 1)
	{
		taxRate = nTaxRate;
	}
	else
	{
		taxRate = 0.08;
	}
	
}

void GiftWrap::setLength(double usrInput)
{
	length = usrInput;
}

void GiftWrap::setWidth(double usrInput)
{
	width = usrInput;
}

void GiftWrap::setHeight(double usrInput)
{
	height = usrInput;
}

void GiftWrap::setPricePerInch(double usrInput)
{
	pricePerInch = usrInput;
}

void GiftWrap::setTaxRate(double usrInput)
{
	taxRate = usrInput;
}


double GiftWrap::getLength()
{
	return length;
}

double GiftWrap::getWidth()
{
	return width;
}

double GiftWrap::getHeight()
{
	return height;
}

double GiftWrap::getPricePerInch()
{
	return pricePerInch;
}

double GiftWrap::getTaxRate()
{
	return taxRate;
}

double GiftWrap::calcSubTotal()
{
	double surfaceArea;
	double subTotal;
	surfaceArea = (2 * length * width) + (2 * length * height) + (2 * width * height);
	subTotal = surfaceArea * pricePerInch;
	return subTotal;
}

double GiftWrap::calcTax()
{
	double tax = GiftWrap::calcSubTotal() * taxRate;
	return tax;
}

double GiftWrap::calcTotal()
{
	double total = GiftWrap::calcSubTotal() + GiftWrap::calcTax();
	return total;
}