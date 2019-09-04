//Yong, Zhou
//Miguel Long. MAC125_7133 
#pragma once
#include "Demon.h"
#include<string>
using namespace std;

class Balrog :public Demon
{
public:
	Balrog();
	~Balrog();
	Balrog(int newStrength, int newHit);
	string getSpecies();
	int getDamage();
};

