#pragma once
#ifndef STRING
#define STRING_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//tyest
class TextAdventure
{
private:
	string Beginnig;

public:
	string Player = "Wizard";
	Room rooms[3];
	void StartPoint();
	void NorthRoom()const;
	void SouthRoom()const;
	void WestRoom()const;
	void EastRoom()const;
	bool FindSpell(string spellname);
	void SetUpRoom();
	int currentRoomIndex();
	bool Help()const;
};
class Item
{
private:
	string amount[3];

public:
	string Item1 = "Whispering Skull of Voren";
	string Item2 = "Ring of Bonebinding";
	string Item3 = "Cloak of the Shadow Wraith";
	string Item4 = "Gauntlet of the Grave";

};
class Skull : public Item
{
 protected:
	string name = Item1;
	string description = "This ancient skull whispers dark secrets and hidden knowledge, offering insight into necromantic rituals.";
public:
    void setName(string name) const { name = Item1; }
	
};
class Ring : public Item
{
protected:
	string name = Item2;
	string description = "Allows the wearer to control skeletal remains, animating them as minions.";
public:
	void setName(string name) const { name = Item2; }
};
class Cloak : public Item
 {
protected:
	string name = Item3;
	string description = "Shrouded in darkness, this cloak grants the wearer the ability to become intangible and move unseen in shadows.";
public:
	void setName(string name)const { name = Item3; }
};
class Gauntlet : public Item 
{
protected:
	string name = Item4; 
	string desciption = "A gauntlet that can drain life force, strengthening the wearer while weakening their foes.";
public:
	void setName(string name)const { name = Item4; }

};

class Spells
{
private:
	string spells[4];
public:
	string AgingSpell = "This spell causes the target to inexplicably age until they are withered husks.";
	string FireBall = "This spell allows you to cast a ball of fire towards your choice of target";
	string ThunderBolt = "This spell allows the user to cast thunder from the sky at their will.";
	string CloningSpell = "This spell allows the user to create clones of themself. ";
	string InstantDeath = "This spell cast death upon their target of choice, But using this spell will take years off your lifespan";
};
class Player
{
protected:

	string spells[4];
public:
	Player();
};
class Room 
{
private:
	string Rooms[3];
public:
string room = "This room is the taverns shop where you can find all the items you need on your adventure.";
string room1 = "This is the blacksmith area, He can create any item you need with the required items.";
string room2 = "This is the taverns resting area, You can sleep at anytime you please to get your stamina back to full.";
string room3 = "This is the taverns keeper area, they will give you quest and advice.";
};
class PlayerAction
{
public:
	string moveNorth;
	string moveSouth;
	string moveWest;
	string moveEast;
	cout << "BIngBid"
};

#endif