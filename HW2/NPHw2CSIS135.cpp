#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	string planetName;
	char charSelection;
	double weight, speed, surfGrav, distSun, distPlanets, timeHours, timeDays, timeYears;
	const double distEarth = 93;

	cout << "Welcome to INTERPLANETARY TRAVEL PROGRAM!" << endl
		<< "This program enables you to find out your travel time to the planet" << endl
		<< "you want to travel to as well as your weight on that planet." << endl
		<< "Please enjoy the program and find the perfect planet for you!" << endl << endl << endl;
	cout << "INTERPLANETARY TRAVEL MENU" << endl
		<< "--------------------------" << endl
		<< "a) Mercury\nb) Venus\nc) Earth\nd) Mars\ne) Jupiter\nf) Saturn\ng) Uranus\nh) Neptune\nq) quit\n\n";
	cout << "Select a planet to travel to or q to quit the program: ";
	cin >> charSelection;

	if (charSelection >= 'a' && charSelection <= 'h')
	{
		cout << endl << "Please enter your weight (in lbs): ";
		cin >> weight;
		cout << endl << "Please enter the speed (in mile per hour) that you would like to travel at: ";
		cin >> speed;
		if (charSelection == 'a')
		{
			planetName = "Mercury";
			surfGrav = 0.27;
			distSun = 36;
		}
		else if (charSelection == 'b')
		{
			planetName = "Venus";
			surfGrav = 0.86;
			distSun = 67;
		}
		else if (charSelection == 'c')
		{
			planetName = "Earth";
			surfGrav = 1;
			distSun = 93;
		}
		else if (charSelection == 'd')
		{
			planetName = "Mars";
			surfGrav = 0.37;
			distSun = 141;
		}
		else if (charSelection == 'e')
		{
			planetName = "Jupiter";
			surfGrav = 2.64;
			distSun = 483;
		}
		else if (charSelection == 'f')
		{
			planetName = "Saturn";
			surfGrav = 1.17;
			distSun = 886;
		}
		else if (charSelection == 'g')
		{
			planetName = "Uranus";
			surfGrav = 0.92;
			distSun = 1782;
		}
		else if (charSelection == 'h')
		{
			planetName = "Neptune";
			surfGrav = 1.44;
			distSun = 2793;
		}
	}
	else if (charSelection == 'q')
	{
		cout << endl << "You have chosen to quit the program. Thank you for using the program!" << endl;
		//system("PAUSE");
		return 0;
	}
	else
	{
		cout << endl << "You have entered an invalid selection." << endl;
		//system("PAUSE");
		return 0;
	}
	weight = weight * surfGrav;
	distPlanets = abs(distSun - distEarth);
	timeHours = distPlanets / speed;
	timeDays = timeHours / 24;
	timeYears = timeDays / 365;

	cout << endl << endl << "INTERPLANETARY TRAVEL:  Earth to " << planetName << endl
		<< "--------------------------------------------------" << endl
		<< "Your weight on " << planetName << ":      " << fixed << setprecision(2) << weight << " lbs" << endl << endl
		<< "Your travel time to " << planetName << ":" << endl
		<< "    In Hours: " << setprecision(0) << timeHours * 1000000 << " hours" << endl
		<< "    In Days : " << timeDays * 1000000 << " days" << endl
		<< "    In Years : " << setprecision(2) << timeYears * 1000000 << " years" << endl << endl;
	//system("PAUSE");
	return 0;
}