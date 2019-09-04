// // Yong, Zhou
//Miguel Long. MAC125_7133_59144
//#include "stdafx.h"
#include "Cyberdemon.h"
#include<iostream>
using namespace std;

Cyberdemon::Cyberdemon()
{
}


Cyberdemon::~Cyberdemon()
{
}

Cyberdemon::Cyberdemon(int newStrength, int newHit) :Demon(newStrength, newHit)
{}

string Cyberdemon::getSpecies()
{
	return "Cyberdemon";
}

int Cyberdemon::getDamage()
{
	int damage = Demon::getDamage();
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	return damage;
}