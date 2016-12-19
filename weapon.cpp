#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#include "weapon.h"

// Creates a weapon and returns it
Weapon* CreateWeapon()
{
	// constants to randomize the weapon name
	const string adjective[4] = {"Bronze ", "Copper ", "Silver ", "Gold "};
	const string type[4] = {"sword ", "axe ", "lance ", "knife "};
	const string subtitle[4] = {"of fire", "of water", "of wind", "of earth"};

	// Creates a pointer to the weapon struct
	Weapon* new_weapon = new Weapon;

	// Allocates the value for the name of the weapon
	new_weapon->name.append(adjective[rand() % 4]);
	new_weapon->name.append(type[rand() % 4]);
	new_weapon->name.append(subtitle[rand() % 4]);
	new_weapon->weapon_class = rand() % 10;

	return new_weapon;
}

// Prints the information about a weapon to screen
void ShowWeaponInfo( Weapon* a ) 
{
	cout << "---------------------------------------" << endl;
	cout << "Weapon name: " << a->name << endl;
	cout << "Weapon class: " << a->weapon_class << endl;
	cout << "---------------------------------------" << endl;
}

// Deallocates the memory that weapon have been using
void DestroyWeapon( Weapon *a )
{
	delete a;
}
