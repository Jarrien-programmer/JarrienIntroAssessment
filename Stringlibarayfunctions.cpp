#include <iostream>
#include <fstream>
#include <string>
#include "Biostring.h"
using namespace std;
TextAdventure::TextAdventure()
{
	string Player = "Wizard";
	class Item;
	class spells;
	class Rooms;
	class PlayerAction;
}
void TextAdventure::StartPoint() 
{
	cout << "This is your start point. " << endl;
	cout << "Which room catches your interest best?" << endl;

}
int TextAdventure::currentRoomIndex()
{
	string RoomIndex = 0;
}
void TextAdventure::SetUpRoom()
{
	rooms[4];
};
void TextAdventure::NorthRoom()const
{
	rooms[1]; 
	cout << "You are now entering the shop" << endl;
}
void TextAdventure::SouthRoom()const
{
	rooms[2];
	cout << "You are now entering the BlackSmith area" << endl;
}
void TextAdventure::WestRoom()const
{
	rooms[3];
	cout << "You are now entering the resting area";
}
void TextAdventure::EastRoom()const
{
	rooms[4];
	cout << "You are entering the keepers area";
}
bool TextAdventure::FindSpell(string spellname)
{
	class Spells; 
}
Player::Player()
{
	string name = "Wizard";
	int lvl = 90;
	cout << name << lvl << endl;
}
bool TextAdventure::Help()const
{
	string Player;
	string moveNorth;
	string moveSouth;
	string moveWest;
	string moveEast; 
}
