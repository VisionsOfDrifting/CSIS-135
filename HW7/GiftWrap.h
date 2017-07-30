#ifndef GIFTWRAP_H
#define GIFTWRAP_H
class GiftWrap	
{
	private:
		double length;
		double width;
		double height;
		double pricePerInch;
		double taxRate;

	public:
		GiftWrap();
		GiftWrap(double, double);

		void setLength(double);
		void setWidth(double);
		void setHeight(double);
		void setPricePerInch(double);
		void setTaxRate(double);

		double getLength();
		double getWidth();
		double getHeight();
		double getPricePerInch();
		double getTaxRate();

		double calcSubTotal();
		double calcTax();
		double calcTotal();
};
#endif