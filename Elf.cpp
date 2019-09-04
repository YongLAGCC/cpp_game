// Yong, Zhou
//Miguel Long. MAC125_7133
//#include "stdafx.h"
#include "Elf.h"
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<random>
using namespace std;

Elf::Elf()
{
}

Elf::~Elf()
{
}

Elf::Elf(int newStrength, int newHit)
	:Creature(newStrength, newHit)
{}

int Elf::getDamage()
{
	random_device rd;
	default_random_engine e(rd());
	uniform_int_distribution<> u(0, 9);
	int damage = Creature::getDamage();
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	if (u(e) == 0)
	{
		cout << "Magical attack inflicts " << damage << " addidional damage points" << endl;
		damage = damage * 2;
		cout << "Elf total damage points are: " << damage << endl;
	}
	return damage;
}

string Elf::getSpecies()
{
	return "Elf";
}