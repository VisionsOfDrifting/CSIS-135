
//Nicholas Pappas

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int numExplorers, numDead, numSurvivers, extraGold, GOLD_PIECES = 750;
	cout << "Welcome to Lost Fortune!" << endl << endl
		<< "Please enter the following questions for your personalized adventure: " << endl << endl
		<< "Enter the number of Explorers: " << endl;
	cin >> numExplorers;
	cout << "Enter the number of Explorers Lost in Battle: " << endl;
	cin >> numDead;
	numSurvivers = numExplorers - numDead;
	extraGold = GOLD_PIECES % numSurvivers;
	cout << endl << "You bravely led " << numExplorers
		<< " adventurers on a quest for gold." << endl
		<< "The group fought a band of ogres and lost " << numDead << " members." << endl
		<< "Only " << numSurvivers << " survived." << endl << endl;
	cout << "The party was about to give up when they stumbled upon the" << endl 
		<< "buried fortune of " << GOLD_PIECES << " gold pieces. The group split the loot evenly" << endl 
		<< "and as the quest leader you kept the extra " << extraGold << " gold pieces." << endl << endl;
	//system("PAUSE");
	return 0;
}
