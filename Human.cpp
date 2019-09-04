// Yong, Zhou
//Miguel Long. MAC125_7133_59144
#include "stdafx.h"
#include "Human.h"
#include<iostream>
using namespace std;

Human::Human()
{
}


Human::~Human()
{
}

Human::Human(int newStrength, int newHit) :Creature(newStrength, newHit)
{}

string Human::getSpecies()
{
	return "Human ";
}

int Human::getDamage()
{
	int damage = Creature::getDamage();
	cout << getSpecies() << "attacks for " << damage << " points!" << endl;
	return damage;
}
