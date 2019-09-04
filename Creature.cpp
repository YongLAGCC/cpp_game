//#include "stdafx.h"

// Yong, Zhou

//#include "stdafx.h"
#include "Creature.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
#include<random>
using namespace std;

Creature::Creature()
{
}

Creature::~Creature()
{
}

Creature::Creature(int newStrength, int newHit) :strength(newStrength), hitpoints(newHit)
{}


int Creature::getDamage()
{
	random_device rd;
	default_random_engine e(rd());
	uniform_int_distribution<> u(0, strength);
	int damage;
	damage = u(e);
		return damage;
}


int Creature::getstrength()
{
	return strength;
}

void Creature::setstrength(int newStrength)
{
	if (newStrength > 0)
		strength = newStrength;
	else
		cout << "the strength error!" << endl;
}

int Creature::getHitpoints()
{
	return hitpoints;
}

void Creature::setHitpoins(int newHit)
{
	if (newHit > 0)
		hitpoints = newHit;
	else
		cout << "the HP error!" << endl;
}