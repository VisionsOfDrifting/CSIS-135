
//Nicholas Pappas

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double lengthPyramid, heightPyramid, areaBase, volumePyramid;
	cout << "Please enter the length of one of the sides of the base: " << endl;
	cin >> lengthPyramid;
	cout << "Please enter the height of the pyramid: " << endl << endl << endl;
	cin >> heightPyramid;
	areaBase = lengthPyramid * lengthPyramid;
	volumePyramid = areaBase * (heightPyramid / 3);
	cout << fixed << setprecision(2) << "The area of the base of the pyramid is: " << areaBase << endl;
	cout << "The height of the pyramid is: " << heightPyramid << endl;
	cout << "The volume of the pyramid is: " << volumePyramid << endl;
	//system("PAUSE");
	return 0;
}
