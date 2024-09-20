#include <bits/stdc++.h>
using namespace std;

class Instrument{                       //Base Class
public:
	virtual void MakeSound(){              //Virtual function
		cout << "Instrument playing...\n";
	}
};

class Accordion: public Instrument{     //becomes derived class of Instrument
public:
	void MakeSound(){
		cout << "Accordion playing...\n";
	}
};

int main(){
	Instrument i1;
	i1.MakeSound();

	Instrument* i2 = new Accordion();
	i2->MakeSound();

	//system("pause>0");
}

//Note- virtual functions and pure virtual function can have argument, 
//but they should be same in both base and derived classes.

//When this function make sound which is implemented in both 
//base class and derived class is invoked using a base class pointer, 
//the most derived version of the fucntion should be executed. 