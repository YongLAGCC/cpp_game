

// Yong, Zhou
//Miguel Long. MAC125_7133_59144
#pragma once
#include<string>
using namespace std;
class Creature
{
private:
	int strength;   // How much damage we can inflict 
	int hitpoints;  // How much damage we can sustain
public:
	// Initialize to human, eg. 10 strength, and 10 hit points.
	Creature();
	~Creature();
	// Initialize creature to new type, strength, hit functions
	Creature(int newStrength, int newHit);
	int getstrength();   
	void setstrength(int newStrength); 
	int getHitpoints();  
	void setHitpoins(int newHit);
	
	virtual int getDamage(); // Return amount of damage this creature. 
							 // inflicts in one round of combat. 
	virtual string getSpecies() = 0;
};

