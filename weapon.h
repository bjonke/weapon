#ifndef _WEAPON_H_
#define _WEAPON_H_

// Declaration of what type of information that should be saved in a weapon object
struct Weapon
{
	string name;
	int weapon_class;
	int test;
};

// Returning a pointer to a finished armour object
Weapon* CreateWeapon();

// Printing the information that CreateWeapon have pointed out
void ShowWeaponInfo( Weapon* a );

// Deallocate all memory that Weapon have used to create a weapon
void DestroyWeapon( Weapon* a );

#endif
