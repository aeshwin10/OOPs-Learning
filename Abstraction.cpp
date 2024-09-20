#include <iostream>
using namespace std;

class AbstractEmployee{           //similar to an contract. Whoever signs this contract, must definitely 
public:	
	virtual void AskForPromotion(int age) = 0;      //have their own implementation of the pure virtual functions
};

class Employee : public AbstractEmployee{
public:
	void AskForPromotion(int age){
		if(age>20){
			cout << "You will get a promotion";
		}
		else{
			cout << "Better luck next time";
		}
	}
};

int main(){
	AbstractEmployee* e1 = new Employee();
	e1->AskForPromotion(20);  //if this needs to be called, I need to have base class under public.

	Employee e2;
	e2.AskForPromotion(21);   //if this needs to be called, I do not worry about the access of the base class

}