// ConsoleApplication107.cpp : Defines the entry point for the console application.
//

// Yong, Zhou
//Miguel Long. MAC125_7133_59144

//#include "stdafx.h"
#include "Creature.h"
#include "ConsoleApplication107.cpp"
#include "ConsoleAppliction107.h"
#include "Human.h"
#include "Cyberdemon.h"
#include "Balrog.h"
#include "Elf.h"
#include<iostream>
#include<string>
#include<random>

using namespace std;

void battleArena(Creature &creaturel1, Creature &creaturel2);
int main()
{
	Balrog player1(10, 20);  // 
	Cyberdemon player2(10, 50);
	Elf player3(10, 50);
	Human player4(20, 100);
	Creature* ptr = &player4;

	battleArena(player1, player3);

	system("pause");
	return 0;
}

void battleArena(Creature &creaturel1, Creature &creaturel2)
{
	Creature *ptr1 = &creaturel1;
	Creature *ptr2 = &creaturel2;
	int static HP1, HP2, round = 1;
	HP1 = ptr1->getHitpoints();
	HP2 = ptr2->getHitpoints();
	int damage1, damage2;
	do {
		cout << "round: " << round++ << endl;
		damage1 = ptr1->getDamage();
		//cout << ptr1->getSpecies() << " attack point is: " << damage1 << endl;
		damage2 = ptr2->getDamage();
		//cout << ptr2->getSpecies() << " attack point is " << damage2 << endl;
		HP1 = HP1 - damage2;
		//cout << endl;
		cout << ptr1->getSpecies() << " HP left: " << HP1;
		HP2 = HP2 - damage1;
		cout << endl;
		cout << ptr2->getSpecies() << " HP left: " << HP2;
		cout << endl;
		cout << endl;
	} while ((HP1 > 0) && (HP2 > 0));
	if (HP1 > 0)
		cout << "the winer is " << ptr1->getSpecies() << endl;
	if (HP2 > 0)
		cout << "the winer is " << ptr2->getSpecies() << endl;
	else
		cout << "Both died!" << endl;
}


