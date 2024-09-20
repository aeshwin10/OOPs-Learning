#include <bits/stdc++.h>
using namespace std;

class Instrument{                       //Base Class
public:
	virtual void MakeSound() = 0;       //Pure virutal function implemented, so it becomes a abstract class aswell

	void HelloWorld(){
		cout << "Hello World" << "\n";
	}
};

class Accordion: public Instrument{     //becomes derived class of Instrument
public:
	void MakeSound(){
		cout << "Accordion playing...\n";
	}
};

class Piano: public Instrument{
public:
	void MakeSound(){
		cout << "Piano is playing" << "\n";
	}

	void HelloWorld(){
		cout << "Hello World from Piano" << "\n";
	}
};

int main(){
	//Instrument i1;
	//i1.MakeSound();

	Instrument* i2 = new Accordion();
	i2->MakeSound();

	Instrument* i3 = new Piano();
	i3->MakeSound();

	//Abstract class having their own functions and virtual functions.
	Instrument* i4 = new Piano();
	i4->HelloWorld();  //Abstract class's function is called

	//Calling the function of the derived class directly.
	Piano i5;
	i5.HelloWorld();

	//system("pause>0");
}
