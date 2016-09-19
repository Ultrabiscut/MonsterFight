#ifndef _MOB_
#define _MOB_

using namespace std;
#include <string>
#include "time.h"

class mob
{
private:
	int health;
	int strength;
	int dexterity;
	string name;

public:
	//MOB 1
	//constructors
	mob();
	mob(int, int, int, string);
	//destructors
	~mob();
	
	//MUTATOR'S - will change
	void setStats(int, int, int, string);
	//ACCESSOR'S - won't change
	void printStats();
	bool isDead();
	string getName();
	bool attack(mob&);
};

#endif