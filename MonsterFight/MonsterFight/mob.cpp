#include "mob.h"
#include "time.h"
#include <iostream>
using namespace std;

//This file is where we are going to write the
//code for how each member function works for 
//the mob class.

//returnType className::functionName(formal params)

//define the default constructor
mob::mob()
{
	health = 0;
	strength = 0;
	dexterity = 0;
	name = "";
}


//define the constructor
mob::mob(int life, int power, int dext, string name2)
{
	health = life;
	strength = power;
	dexterity = dext;
	name = name2;
}

//define the destructor
mob::~mob()
{

}

//define setStats() function
void mob::setStats(int life, int power, int dext, string name2)
{
	health = life;
	strength = power;
	dexterity = dext;
	name = name2;
}

//define printStats() function
void mob::printStats()
{
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
	cout << "Strength: " << strength << endl;
	cout << "Dexterity: " << dexterity << endl;
}

//define isDead() function
bool mob::isDead()
{
	if (health <= 0)
		return true;
	else
		false;
}

//define getName(string) function
string mob::getName()
{
	return name;
}

//define attack() function
bool mob::attack(mob &defender)
{
	//declare variables
	bool bSuccess;
	int damage = 0;


	//seed the random number generator
	srand(time(NULL));

	bSuccess = (((rand() % dexterity) - (rand() % defender.dexterity)) > 0);

	if (bSuccess == true)
	{
		damage = strength - defender.dexterity;
	}

	defender.health = defender.health - damage;

	return bSuccess;
}