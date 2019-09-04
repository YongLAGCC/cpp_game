// Yong, Zhou
//Miguel Long. MAC125_7133_59144
//#include "stdafx.h"
#include "Demon.h"
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<random>

using namespace std;

Demon::Demon()
{
}


Demon::~Demon()
{
}

Demon::Demon(int newStrength, int newHit)
	:Creature(newStrength, newHit)
{
}


int Demon::getDamage()
{
	random_device rd;
	default_random_engine e(rd());
	uniform_int_distribution<> u(1, 100);
	int damage;
	damage = (Creature::getDamage());
	if (u(e) <= 5)
	{
		damage = damage + 50;
		//cout << "Demonic attack inflicts 50" << "additional damage points" << endl;
		//cout << "The total damage points are: " << damage << endl;
		return damage;
	}
	else
	{
		//cout << "NO Demonic attack. " << endl;
		return damage;
	}
}

