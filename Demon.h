

// Yong,zhou
//Miguel Long. MAC125_7133_59144
#pragma once
#include "Creature.h"
#include<string>
using namespace std;

class Demon :public Creature
{
public:
	Demon();
	~Demon();
	Demon(int newStrength, int newHit);
	string getSpecies() = 0;
	int getDamage();
};

