#include <iostream>
#include "mob.h"
#include "windows.h"
using namespace std;

//Program: MonsterFight
//Author: Tyler Timmins
//Course: ITSE 2331-2001
//Description: Create a class definition, public, and private members and member functions
//	and will simulate two video game characters fighting!


int main()
{
	//declare variables
	bool bContinue = true;

	//declare objects
	mob Man(100, 50, 35, "Man");
	mob Demon(100, 65, 30, "Demon");

	//print stats
	Man.printStats();
	cout << endl;
	Demon.printStats();

	
	do
	{
		//start the fight
		cout << "Press any key to fight!" << endl;
		system("pause");

		cout << endl;

		//demon attacks the man
		if (Demon.attack(Man) == true)
		{
			cout << Demon.getName() << " Hits!" << endl;
		}
		else if (Demon.attack(Man) == false)
		{
			cout << Demon.getName() << " Misses!" << endl;
		}

		//man attacks the demon
		if (Man.attack(Demon) == true)
		{
			cout << Man.getName() << " Hits!" << endl;
		}
		else if (Man.attack(Demon) == false)
		{
			cout << Man.getName() << " Misses!" << endl;
		}

		//space
		cout << endl;

		//print the stats for both man and demon
		Man.printStats();
		cout << endl;
		Demon.printStats();

		//space
		cout << endl;
		
		//Demon wins
		if (Man.isDead() == true)
		{
			bContinue = false;
			cout << "Demon Has WON!!!!" << endl;
		}
		//Man wins
		else if (Demon.isDead() == true)
		{
			bContinue = false;
			cout << "Man Has WON!!!" << endl;
		}
		//If a tie happens
		else if (Demon.isDead() == true && Man.isDead() == true)
		{
			bContinue = false;
			cout << "BOTH HAVE DIED!!!" << endl;
		}
		//continue the fight none have died yet
		else
			bContinue = true;

		//pause for 3 seconds
		Sleep(5000);

		//clear system
		system("cls");


	} while (bContinue);

	

	return 0;
}