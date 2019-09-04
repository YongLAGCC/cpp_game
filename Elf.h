// Yong, Zhou
//Miguel Long. MAC125_7133

#pragma once
#include "Creature.h"
#include<string>
using namespace std;
class Elf :public Creature
{
public:
	Elf();
	~Elf();
	Elf(int newStrength, int newHit);
	string getSpecies();
	int getDamage();
};

