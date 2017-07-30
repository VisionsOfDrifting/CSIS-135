#ifndef STATS_H
#define STATS_H
//#include <string>
const int arraySize = 12;
class Stats	
{
	private:
		double array[arraySize];
	public:
		Stats();
		void setValue(int, double);
		void getValues();
		double getTotal();
		double getAvg();
		double getLargest();
		double getSmallest();

};
#endif