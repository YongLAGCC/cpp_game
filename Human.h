
// Yong, Zhou
//Miguel Long. MAC125_7133_59144
#pragma once
#include "Creature.h"
#include<string>
using namespace std;

class Human :public Creature
{
public:
	Human();
	~Human();
	Human(int newStrength, int newHit);
	int getDamage();
	string getSpecies();
};

