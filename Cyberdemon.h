// Yong, Zhou
//Miguel Long. MAC125_7133_59144
#pragma once
#include "Demon.h"
#include<string>
using namespace std;
class Cyberdemon :public Demon
{
public:
	Cyberdemon();
	~Cyberdemon();
	Cyberdemon(int newStrength, int newHit);
	string getSpecies();
	int getDamage();
};


