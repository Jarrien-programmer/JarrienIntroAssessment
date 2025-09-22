#include <iostream>
#include <fstream>
//#include "Function.h"
#include <string>
using namespace std;
//void loop();
//string billy(string words); 
//string getLength(string words); 
//bool twoStrings(string Ace, string Wildcard);
//string toLowerCase(string lower);  
//string toUpperCase(string upper);
//void game(const string name); 
//void command(); 
//void getLine(); 
//void reference();
//void doubleValue(int& ref);
//void printValue(); 
//void files(string event);
//void highScore(); 
//void weapon();

	//class Player
	//{
	//private:
	//	int health;

	//public:
	//	string name;
	//	void takeDamage(int damage)
	//	{
	//							We are men and women of peace so bool Weapon == false
	//		health -= damage;
	//		cout << name << " takes " << damage << " damage";
	//	}
	//	int hetHealth()
	//	{
	//		return health;
	//	}
	//	int setHealth(int newHealth)
	//	{
	//		return health = newHealth;
	//	}
	//};
//string name = "Jabber";
//struct gameCharacter
//{
//	string name;
//	int health;
//	int level;
//};
//class BankAccount
//{
//private:
//	int balance = 1000;
//	int accountNumber = 6741420;  
//public:
//                           ALL PRAISE PABLO LONG LIVE GODKING PABLO
//	float getBalance()
//	{
//		return balance;
//	}
//	int setAccountNumber(int an)
//	{
//		accountNumber = an;
//		return accountNumber;
//	}
//	int Deposit(int money)
//	{
//		balance = balance + money;
//		return balance;
//	}
//
//};
//struct address 
//{
//	string street;
//	string city;
//	int zipcode;
//};
//struct human
//{
//	string name;
//	address humanAddress; 
//	int score
// 
//};
//class Student
//{
//private:
//	string name = "Unknown";
//	int id = 0;
//	float gpa = 0.0;
//public:
//	Student()  
//	{
//		id = 0;
//		name = "Unknown";
//		gpa = 0.0;
//	}
//	Student(int studentId, string studentName)
//	{
//		id = studentId;
//		name = studentName;
//	}
//	void Display()
//	{
//		cout << id << endl;  
//		cout << name << endl; 
//	}
//};
//class Weapons
//{
//private:
//	string name = "Name";
//	int damage = 1;
//	int durability = 1;
//public:
//	Weapons()
//	{
//		name = "Jimbo";
//		damage = 10;
//		durability = 35;
//	}
//	Weapons(string weaponname, int weapondamage, int weapondurability)
//	{
//		 name = weaponname;
//		 damage = weapondamage;
//		 durability = weapondurability;
//	};
//	void weaponinfo()
//	{
//		cout << "Weapon name: " << name << endl;
//		cout << "Damage " << damage << endl;
//		cout << "Durability " << durability << endl;
//	}
//	 
//};


//this is the main it is the main because it is and it know what it is because it knows what it isn't which is what it is main.
//class item
//{
//public:
//	virtual void itemUsed() 
//	{
//		cout << "Item: healthpack" << endl;
//		cout << "Your are using this item" << endl;
//	}
//};
//class Sword : public item
//{
//	string blade = "Sinner";
//	string handle = "Enchanted with deathgrip";
//public:
//	Sword()
//	{
//		cout << "This is a sword called " << blade << endl; 
//		cout << "Its handle is " << handle << endl;
//	}
//	void itemUsed()override 
//	{
//		cout << "you swung your sword" << endl; 
//	}
//};
//class shape
//{
//public:
//	virtual void drawShape()
//	{
//		cout << "Drawing a shape " << endl;
//	}
//};
//class circle : public shape
//{
//	string name = "square";
//	string object = "circle";  
//public:
//	circle()
//	{
//		cout << "Drawing a shape " << endl;
//		cout << "Your shape has been drawn" << endl;
//	};
//	void drawShape()override
//	{
//		cout << "Drawing a circle" << endl;
//	}
//};

int main()
{
	int num1;
	int num2;
	int sum = 0; 
	string input;
	cout << "Please select between (Addition, Subtraction, Division, or Multiplication)" << endl;
	cin >> input;
	cout << "Please provide any number to your liking" << endl;
	cin >> num1;
	cout << "Please provide a second number " << endl;
	cin >> num2;
	void additon(int num); 
	{
	for  (int i = 1; i <= 100;  i++)
		{
			cout << num1 << "+" << num2 << "=";
			cout << num1 + num2 << sum << endl;
		}
	}
	void subtract(int num); 
	{
		for (int i = 1; i <= 100; i++)
		{
			cout << num1 << "-" << num2 << "=";
			cout << num1 - num2 << sum << endl;
		}
	} 
	void multiply(int num); 
	{
		for (int i = 1; i <= 100; i++)
		{
			cout << num1 << "*" << num2 << "=";
			cout << num1 * num2 << sum << endl;
		}
	}
	void divide(int num); 
	{
		for (int i = 1; i <= 100; i++)
		{
			cout << num1 << "/" << num2 << "=";
			cout << num1 / num2 << sum << endl;
		}
	}
}
	




//{
//	item health;
//	health.itemUsed();
//	Sword banger;
//	banger.itemUsed();
//}
////class noise
//{
//public:
//	virtual void makesound()
//	{
//		cout << "Bark" << endl;
//	}
//};
//class Animal :public noise
//{
//	string name = "bily";
//	string animal = "Cheetah";
//public: 
//	Animal()
//	{
//		cout << "This animal is a " << animal << endl;
//		cout << "This animals name is " << name << endl;
//	}
//	void makesound()override
//	{
//		cout << "woof!" << endl;
//	}
//
//};
//class GameCharacter
//{
//public:
//	GameCharacter()
//	{
//		cout << "Class selection";
//	};
//	GameCharacter(int health)
//	{
//		cout << "Health" << health << endl;
//	}
//	GameCharacter(string name)
//	{
//		cout << "Character Name: " << endl;
//	}
//};
//class Warrior: public GameCharacter 
//{
//protected:
//	int health = 100;
//	string name = "Goku";
//public:
//	Warrior()
//	{
//		cout << "Your health is " << health << endl;
//		cout << "Your name is " << name << endl;
//	}
//	Warrior(int Health)
//	{
//		cout << "Health" << endl;
//		health = Health;
//	}
//	Warrior(string Name)
//	{
//		cout << "Your name: " << endl;
//		name = Name;
//	}
//	void Warriorinfo()
//	{
//		cout << "Health " << health << endl;
//		cout << "Name " << name << endl;
//	} 
//};
//
//class Car
//{
//protected:
//	int topspeed = 165;
//	string color = "black";
//	string carClass = "sports car";
//public:
//	Car() {
//		cout << "Your vehicle color is " << color << endl;
//		cout << "Your vehicle is a " << carClass << endl;
//	}
//	Car(string carColor)
//	{
//		cout << "Car color" << endl;
//		color = carColor;
//	}
//	Car(int Topspeed)
//	{
//		cout << "This car topspeed is " << endl;
//		topspeed = Topspeed;
//	}
//};
//class Vehicle :public Car
//{
//public:
//	Vehicle(int topspeed)
//	{
//		cout << "Vehicle topspeed " << topspeed << endl;
//	};
//	Vehicle(string carClass)
//	{
//		cout << "Vehicle class is " << carClass << endl;
//	}
//	void Vehiclehonk(string carClass, string color, int topspeed)
//	{
//		cout << "Beep Beep" << endl;
//	}
//};
//class Animal
//{
//protected:
//	string name = "Timmy";
//	int age = 12;
//public:
//	Animal()
//	{
//		cout << "Animal is " << age << endl; 
//		name = "Boxer";
//	}
//	Animal(string animalName) {
//		cout << "Animal name is " << endl;
//		name = animalName;
//	}
//	Animal(int getAge)
//	{
//		cout << "Animal age is " << endl;
//		age = getAge;
//	}
//};
//class Dog:public Animal
//{public:
//	Dog(int age) { cout << "Animal is " << age << endl; };    
//	Dog(string name) { 
//		cout << "Dog breed is " << name << endl;
//	}
//	void Dogbark(string name, int age)  
//	{
//		cout << name << endl;
//		cout << age << endl; 
//		cout << "Bark, bark buddy :)" << endl;
//	}
//};
//};
//class Sword : public item
//{
//public:
//	Sword() { cout << "Sword constructor called" << endl; };
//	Sword(string leName) {
//		cout << "Sword with the name called!" << endl; 
//	}
//	
//};
//class item
//{
//protected:
//	string name;
//
//public:
//	item() {
//		cout << "Item constructor called" << endl;
//		name = "Uknown Item";
//	}
//	item(string itemName)
//	{
//		cout << "Item constructor with name called " << endl;
//		name = itemName; 
//	}
//};


	/*circle abe;
	abe.drawShape();
	cout << "I think I drew the wrong shape" << endl;
	shape dea;
	dea.drawShape();
	cout << "Yea i messed up" << endl*/
	
	/*Animal cat;
	cat.makesound();
	cout << "Yes cheetahs bark" << endl*/

	/*{
		Weapons weapon1;
		Weapons weapons2;
		Weapons weapons3;
		weapon1.weaponinfo();
		weapons2.weaponinfo();  
		weapons3.weaponinfo();

	};*/
//{ 
//
//	Student billy;
//	Student Maria(67, "word");
//	billy.Display();
//	Maria.Display();
//
//	
//	
//}




	//{
//		address humanAddress = { "Copperbottom ", "Mizzouri" , 78949 };
//		human francis = { "Francis Rocker" , humanAddress ,192304 };
//		cout << francis.name << endl;
//		cout << francis.humanAddress.city << endl;
//		cout << francis.humanAddress.street << endl; 
//		cout << francis.humanAddress.zipcode << endl;
//}

/////////Fear those who have come before you when you leave your tabs open. 

	/*{
		gameCharacter player = { "Jabbar", 100, 67 };
		cout << "Player Name: " << player.name << endl; 
		cout << "Player Health: " << player.health << endl;
		cout << "Player Level: " << player.level << endl;

	}*/

	/*{
		Player p1;
		p1.name = "Player";
		p1.setHealth(100);
		p1.takeDamage(67);
		cout << endl;
		cout << p1.hetHealth();
	}*/

		//	weapon();
		//}  
		//void weapon(string pick) 
		//{
		//	string weapons[4] = {"AK47", "ARP", "G17", "Stick"};
		//	int selection;    
		//	cout << "Select your weapon(0-3)" << endl;
		//	cin >> pick; 
		//	try
		//	{
		//		if (weapons < 0 || pick >= pick || cin.fail())  
		//		{
		//			throw "Invalid";
		//		}
		//		
		//		cout << "Your weapon of choice is the " << weapons[selection] << endl;   
		//		cout << "Have fun with you weapon of choice Player" << endl; 
		//	}
		//	catch (...)
		//	{
		//		cout << "Invalid choice" << endl; 
		//		cout << "Please select a weapon choice that is given to you" << endl; 
		//
		//		cout << "Available Weapon Options" << endl;
		//		for (int i = 0; 1 < selection; i++)
		//		{
		//			cout << i << ": " << selection[i] << endl; 
		//		}
		//	}
		//   for (everytime you forget to log out == true )
		//	{
		//		Var J will leave comments all over yout stuff;
		// 
		//	}
		//{
		//	string message = "Hi";
		//	files(message); 
		//	files("What it do");
		//	files("");
		//}
		//
		//void files(string event)
		//{
		//	ofstream logfile("game_result.txt",ios::app);
		//	if (logfile.is_open()) {
		//		logfile << event; 
		//		logfile.close();
		//		cout << "Game file saved";
		//
		//	}
		//	else
		//	{
		//		cout << "Game filed not saved";
		//	}
		//}
		//void highScore()
		//{
		//	ofstream logfile("Score.txt");
		//
		//		if (logfile.is_open()) 
		//		{
		//			int num5 = 999;
		//			string name;
		//			logfile << "High Score";
		//
		//			logfile << "Gamertag";
		//			cout << "Gamertag" << name; 
		//			cin >> name; 
		//			cout << "  YOUR HIGH SCORE: " << num5;
		//			 
		//			logfile.close(); 
		//		}
		//		
		//}

		//{
		//	reference();
		//	int num;
		//	cout << "Enter a number to double it" << endl;
		//	cin >> num;
		//	doubleValue(num);
		//	printValue();
		//}
		//void reference() {
		//	int num = 25;
		//	int& numRef = num; 
		//	cout << numRef << endl;
		//	numRef = 50;
		//	cout << numRef << endl; 
		//}
		//void printValue(const int &num)
		//{
		//	cout << "Value: " << num;
		//}
		//void doubleValue(int& ref) 
		//{
		//	cout << ref * 2; 
		//}

		//void pointer()
		//{
		//	int health = 100;
		//	int maxHealth = 150;
		//	int* healthptr = &health;
		//	
		//	cout << *healthptr << endl;
		//	healthptr = &maxHealth;
		//	cout << *healthptr << endl;  
		//	cout << "Current Health: " << health;
		//	cout << " Max Health: " << maxHealth;   
		//}
		//void null(int *ptr)
		//{
		//	
		//	if (ptr != nullptr) {
		//		cout << *ptr << endl;  
		//	}
		//	else {
		//		cout << " Pointer is null " << endl; 
		//	}
		//}


		//void pointer()
		//{
		//	int number = 42;
		//	int* numberptr = &number;
		//	cout << number << endl;
		//	cout << *numberptr;
		//}
			/*const string GAME_TIME = "30 min";
			const int MAX_PLAYERS = 4;
			const float VERSION = 1.0;
			int name;
			cout << "Welcome Battle Force " << MAX_PLAYERS;
			cout << " Please enter you preferred name defender" << endl;
			cin >> name;
			cout << "Countiue to the Battle zone" << name  << endl;
			string command;
			cout << "Enter command ";
			getLine(cin, command);*/

			//const string MEAL_TIME = "Meal";
			//string Egoist = "Ace ";
			//string lowerCase; 
			/*string upperCase;*/
			//twoStrings(Egoist, MEAL_TIME);
		/*	cin >> lowerCase;
			toLowerCase(lowerCase); */
			//cin >> upperCase; 
			//toUpperCase(upperCase);  
			/*getLength(MEAL_TIME);*/


		//void game(const string name)
		//{
		//	const string GAME_TIME = "30 min";
		//	const int MAX_PLAYERS = 4;			//Player maxxing 
		//	const float VERSION = 1.0;
		//}
		//void command(string userCommand)
		//{
		//	if (userCommand == "Quit")
		//	{
		//		cout << "Exitting Battle Zone" << endl; 
		//	}
		//	for (int i = 0; i < userCommand.length(); i++)
		//	{
		//		if (userCommand[i] >= 'a' && userCommand[i] <= 'z')
		//		{
		//			userCommand[i] = userCommand[i] - 32;
		//		}
		//	}
		//	cout << userCommand << endl;
		//
		//	cout << userCommand.length();
		//}
		//void command(string userCommand)
		//{
		//	if (userCommand = "Quit"{
		//		cout << "Exitting Battle Zone" << endl; 
		//	}
		//}

		//string getLength(string words)  
		//{
		//	cout << words.length();
		//	return words;
		//}
		//bool twoStrings(string Ace, string Wildcard)
		//{
		//
		//
		//	if (Ace == Wildcard) {
		//		cout << true;
		//			return true;
		//	}
		//	else
		//	{
		//		cout << false;
		//			return false;
		//	}
		//
		//}
		//string toUpperCase(string name)   fr you call your string name "Name?" smh fr
		//{
		//	for (int i = 0; i< name.length(); i++)
		//	{
		//		if (name[i] >= 'a' && name[i] <= 'z');
		//		{
		//			name[i] = name[i] - 32;
		//		}
		//	}
		//	cout << name;
		//	return name;
		//  }
		//string toLowerCase(string name)
		//{
		//	for (int i = 0; i <name.length(); i++)
		//	{ 
		//		if (name[i] >= 'A' && name[i] <= 'Z'); {
		//			name[i] = name[i] + 32;
		//		}
		//	}
		//	cout << name;
		//	return name;
		//}












		//{
		//	loop();
		//};
		//void loop()
		//{
		//	int score[3] = { 7, 14, 21 };
		//
		//
		//	for (int i = 0;i < 3;i++)
		//	{
		//		cout << score[i] << " ";
		//	}
		//}


		//{  
		//	loop();
		//}
		//void loop()
		//{
		//	string pick;
		//	do 
		//	{
		//		cout << "YOU ARE STUCK IN A DO WHILE LOOPS, DO YOU WISH TO STAY??? (yes/no)";
		//		cin >> pick;
		//		if (pick != "yes");
		//	} while (pick != "no");
		//	cout << "You are now exiting the do while loop" << endl;
		//}
		//  
		//