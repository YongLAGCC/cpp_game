
// Yong, Zhou
//Miguel Long. MAC125_7133_59144
//#include "stdafx.h"
#include "Balrog.h"
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<random>
using namespace std;

Balrog::Balrog()
{
}


Balrog::~Balrog()
{
}

Balrog::Balrog(int newStrength, int newHit) :Demon(newStrength, newHit)
{}
// Funciton outputs and returns and damage this creaature can inflict in one found of combat.
int Balrog::getDamage()
{
	int damage = (Demon::getDamage()); 
	int damage2 = (Demon::getDamage());
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
	damage = damage + damage2;
	cout << "Balrog total damage points are: " << damage << endl;
	return damage;
}

string Balrog::getSpecies()
{
	return "Balrog";
}